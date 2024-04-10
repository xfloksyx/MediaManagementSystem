#include <iostream>
#include <vector>

using namespace std;




class Media{

    protected:
        string titre;
    public:
        Media()=default;
        Media(string s){
            titre = s;
        }

        virtual void afficherDetails() {
            cout << "Titre: " << titre;
        }

};

class Livre : public Media {

    protected:
        string auteur;
        int nbPages;
    public:
        Livre()=default;
        Livre(string xs,string ss, int n):Media(xs),auteur(ss),nbPages(n){}

        void afficherDetails(){
            Media::afficherDetails();
            cout <<" | Auteur: "<<auteur <<" | nombre de pages: "<<nbPages<<endl;

        }

};

class Film : public Media {
    protected:
        string realisateur;
        int duree;
    public:
        Film()=default;
        Film(string s, string ss, int d):Media(s),realisateur(ss),duree(d){}

        void afficherDetails(){
            Media::afficherDetails();
            cout << " | Realisateur: "<< realisateur <<" | Duree: "<<duree<<endl;
        }
};


int main(){

    cout << "Marouane El Hizabri 3 IIR 15" << endl;

    vector <Media*> allMedia;
    
    Livre *l1 = new Livre("Free Palestine"," Arabs", 300000);
    Livre *l2 = new Livre("Colonized Arabs", "Tessst", 10);

    Film *f1 =new Film("Almaghrib", "test1",10000);
    Film *f2=new Film("Walo", "test2", 100);

    Media *m1 = new Media("Media1");
    Media *m2 = new Media("Media2");

    allMedia.push_back(l1);
    allMedia.push_back(f1);
    allMedia.push_back(m1);
    allMedia.push_back(f2);
    allMedia.push_back(m2);
    allMedia.push_back(l2);

    cout<<"==========={{ Affichage des objets depuis le vecteur }}===========\n"<<endl;
    for(int i = 0; i<allMedia.size(); i++){
        allMedia[i]->afficherDetails();
        
        cout<<"\n================================================================\n"<<endl;
    }
    return 0;
}
