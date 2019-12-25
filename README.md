# PointerDanReference__CPP
Bahan Ajar Fundamental Pemrograman C++. Mengenal Dasar-Dasar Dan Penggunaan Pointer Beserta Reference Pada Pemrograman C++<br><br>
<img src="https://github.com/RizkyKhapidsyah/PointerDanReference__CPP/blob/master/Result/001.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/PointerDanReference__CPP/blob/master/Result/002.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/PointerDanReference__CPP/blob/master/Result/003.PNG"><br><br>
Lihat <a href="https://github.com/RizkyKhapidsyah/PointerDanReference__CPP/blob/master/Source.cpp">Source Code.</a><br><br>

# POINTER

Pointer adalah suatu variabel penunjuk, berisi nilai yang menunjuk alamat suatu lokasi memori tertentu. Jadi pointer tidak berisi nilai data, melainkan berisi suatu alamat memori. Lokasi memori tersebut bisa diwakili sebuah variabel atau juga berupa alamat memori secara langsung. Pointer adalah sebuah variabel atau object yang menunjuk ke variabel atau object lainnya. Sebelumnya pernah dijelaskan mengenai variabel, menyatakan bahwa. “Variabel merupakan sebuah representasi dari alamat memori pada komputer”.

Dan pointer hanyalah variabel yang menyimpan alamat memori, memori tersebut dapat berasal dari variabel, obyek dan lain-lain. Dengan pointer kita dimungkinkan untuk menunjuk suatu memori, mendapatkan isi dari memori dan mengubah isi dari memori yang di tunjuk. Ada dua operator yang digunakan pada tipe data pointer yaitu:

# Operator Deference (&)

Operator ini biasanya disebut dengan address of atau operator alamat. Dengan menggunakan operator deference (&) ini, suatu variabel akan menghasilkan alamat memori. Operator ini memungkinkan kita untuk mendapatkan/melihat alamat memori yang dimiliki oleh variabel tersebut. Cara menggunakanya adalah dengan meletakan tanda & di depan identitas saat pemanggilan variabel. Hal itu akan membuat compiler memberikan alamat memori bukan isi/nilai dari memori tersebut.

Pada umumnya pointer sebenarnya adalah variabel, peraturan yang dimiliki variabel juga berlaku pada pointer, jadi tidak jauh beda dengan variabel. pointer hanya mendapatkan beberapa perbedaan yaitu penambahan dua operator yang akan membuat variabel menjadi variabel pointer. Untuk mendirikan sebuah variabel pointer kita hanya menambahkan dereference operator sebelum identitas. Operator dereference tidak harus melekat pada identitas, operator tersebut juga bisa di letakan setelah tipe data atau di antara tipe data dan identitas. dari berbagai cara penulisan tersebut memiliki makna yang sama yaitu satu operator dereference hanya akan berlaku pada saru variabel. Pointer tidak hanya berlaku pada variabel, kita juga dapat melakukanya pada function, objek dan lain-lain. Dan cara implementasi pointer selain pada variabel, caranya masih sama seperti kita melakukanya pada variabel.

Contoh:

      int x = 45; 
      cout << &x;

Pada program di atas, akan ditampilkan alamat memori dari variabel x, bukan nilai x.

# Operator reference (*)
Operator ini biasanya disebut value pointed by. Dengan menggunakan operator ini, kita dapat mengakses secara langsung nilai yang terdapat pada suatu alamat memori.

#Mendeklarasikan Variabel Pointer

Suatu variabel pointer didefinisikan dengan bentuk sebagai berikut:

      tipe_data *nama_variabel

tipe_data dapat berupa sembarang tipe seperti halnya pada pendefinisian variabel bukan pointer. nama_variabel adalah nama variabel pointer.

# Cara Mengakses Pointer

Variabel pointer adalah variabel yang memiliki alamat memori sebagai nilai dari variabel pointer tersebut. Dan pada pointer kita dimungkinkan untuk mengakses nilai dari pointer itu sendiri dan mengakses nilai dari alamat memori yang dimiliki(ditunjuk) oleh pointer. Pointer merupakan variabel, untuk mengakses pointer tidak jauh beda dengan cara mengakses variabel. Untuk mengakses nilai dari pointer kita hanya cukup memanggil identiatas dari pointer tersebut.

      pInt

Pemanggilan itu akan menghasilkan nilai dari pointer yang berupa alamat memori dari variabel yang ditunjuk oleh pointer tersebut. Karena pointer hanya dapat mememiliki nilai berupa alamat memori, untuk mengubah nilai dari pointer atau mengubah tujuan dari pointer kita membutuhkan operator address-of (&) pada operand sumber.

      pInt = &myVar

Operand sumber akan menghasilkan alamat memori dari myVar, dan hal itu merupakan nilai yang dibutuhkan oleh variabel pointer. Sebelum anda mempraktikan untuk mengubah nilai dari variabel pointer ada satu hal yang perlu anda tau. Bahwa variabel pointer hanya dapat meneriman alamat memori dari variabel yang memiliki tipe data yang sama.

Contoh Program :

      #include <iostream>
      using namespace std;

        int main()
        {
          int var1 = 2, var2 = 5;
          int *pVar = &var1;

          cout<<"var1 = "<<&var1<<endl;
          cout<<"pVar = "<<pVar<<endl;
          cout<<"====="<<endl<<endl;

          pVar=&var2;

          cout<<"var2 = "<<&var2<<endl;
          cout<<"pVar = "<<pVar<<endl;

          return 0;
        }

Variabel pointer dapat menyimpan alamat memori bukan berarti anda dapat bebas memberi alamat memori secara langsung pada pointer.

      int *pInt = 0x012345;

Hal di atas tidak dimungkinkan untuk dilakukan. Karena isi/nilai dari variable pointer merupakan sebuah alamat memori maka untuk mengakses nilai dari variabel yang dutunjuk oleh pointer kita membutuhkan operator dereference (*).

      *pInt

Dalam pointer kita dimugkinkan untuk menyalin dan mengubah nilai pada variabel yang ditunjuk oleh pointer.

      *pInt = 2

Sebelum anda mencoba mengubah nilai dari memori yang ditunjuk oleh pointer anda harus yakin bahwa memori itulah yang ingin anda ubah nilainya. Jangan pernah mengubah memori yang bukan milik program anda, karena hal itu terlalu memiliki resiko yang cukup serius untuk komputer anda. Dan satu hal yang perlu anda ingat adalah, berilah nilai awal di saat deklarasi pointer. Itu dapat menimalisir kemungkinan kecelakaan, hal itu harus dilakukan karena saat deklarasi variabel pointer tanpa inisialisasi maka pointer akan memiliki nilai sampah.

Contoh Program :

      #include <iostream>
      using namespace std;

      int main()
      {
          int var = 2;
          int *pVar = &var;

          cout<<"var  = "<<var<<endl;
          cout<<"pVar = "<<*pVar<<endl;
          cout<<"====="<<endl<<endl;

          *pVar= 109;

          cout<<"var  = "<<var<<endl;
          cout<<"pVar = "<<*pVar<<endl;

          return 0;
      }

# Ukuran Pointer

Setiap kita medirikan pointer, pointer itu akan membutuhkan memori. Dan besar memori itu sama pada setiap tipe data yang digunakan. Besar memori dari pointer tergantung pada mesin kompiler. jika kompiler merupakan 32bit maka pointer akan memakan memori sebanyak 4 bytes, Jika menggunakan 64bit maka pointer memakan memori sebanyak 8 bytes.

      #include <iostream>
      using namespace std;

      int main()
      {
          int var = 2;
          int *pVar = &var;
          cout<<sizeof(pVar)<<endl;

          return 0;
      }


# REFERENCE

Reference adalah fitur yang berasal dari C++ memungkinkan kita untuk membuat variabel yang dapat memegang alamat memori dan berperan layaknya variabel tapi sebenarnya adalah alias dari suatu alamat memori, suatu obyek, atau suatu variabel. Ketika kita mendirikan variabel, kita juga memesan sebuah memori. Variabel biasa akan berperan layaknya sebagai pengenal yang memegang alamat dari memori itu secara langsung. Tapi reference adalah variabel yang saat mendirikan tidak memesan memori untuk dirinya tapi akan memegang alamat memori dari sebuah memori variabel atau object yang sudah ada.

Setelah kita mendirikan variabel reference kita dimungkinkan untuk bebas mengakses nilai dari memori melalui variabel asli atau variabel reference, jadi variabel reference hanyalah sebuah variabel yang berperan sebagai alias dari suatu penyimpanan. Untuk mendirikan variabel reference dibutuhkan tanda ( & ) “Operator Reference”, diletakan sebelum identitas dari variabel.

Bentuk penulisan :<br>
      
      tipeData &identifier = var;

Contoh penulisan :<br>
      
      int &ref = myVar;

Di dalam materi pointer kita juga diperkenalkan dengan operator bertanda ( & ) yang bernama “address-of”, meskipun menggunakan tanda yang sama tapi mereka akan berbeda tergantung dimana kita meletakannya. Jika tanda ( & ) diletakan saat memanggil sebuah variabel maka tanda itu akan berperan sebagai “address-of” tapi jika anda meletakanya saat mendirikan variabel maka akan berperan sebagai “reference”. Pada contoh penulisan di atas, pernyataan mendirikan sebuah variabel reference yang bernama “ref” akan berperan sebagai alias dari variabel “myVar”. Pada variabel “ref” kita dimungkinkan untuk mengakses memori yang dipegang oleh “myVar” melalui variabel reference bernama “ref”. Variabel reference mewajibkan inisialisasi pada saat didirikan dan arah tujuan dari variabel reference tidak bisa diperbaharui. Tujuan (menunjuk) dari variabel reference hanya bisa ditentukan saat mendirikan variabel reference dan tidak akan bisa diperbaharui.

      int &myRef; //Error
      int &myRef = myVar; //Ok
      myRef = &myOtherVar //Error

# Reference pada Non-const

Variabel reference non-const hanya dapat memegang atau menunjuk ke variabel non-const, tidak biasa menunjuk atau memegang variabel berkonstanta, ini adalah peraturan yang di buat oleh C++ untuk keamanan program anda. Jika itu dimungkinkan maka hal itu akan membuat nilai dari variabel konstanta tidak aman (dapat diubah).

      int const a = 1;
      int &b = a; //Error

Contoh Program :

      #include <iostream>
      int main()
      {
          int a = 1;
          int &b = a;

          std::cout<<a<<"\n";
          b = 2;
          std::cout<<a;

          return 0;
      }

Pada contoh di atas kita diperlihatkan bahwa perubahan yang terjadi pada variabel reference “b” juga berpengaruh pada variable “a”, hal itu dikarenakan mereka memiliki satu memori yang sama. Itu alasan mengapa perubahan pada satu variabel akan berpengaruh pada variabel lainnya (reference).

# Reference pada Const 

Untuk mendirikan sebuah variabel reference yang dapat menunjuk ke variabel Konstanta, dibutuhkan variabel reference yang bersifat konstanta.

    cons int var = 1;
    cons tint &ref = var; //Ok

Kita tidak dimungkinkan untuk mendirikan variabel reference non-const menunjuk ke variabel const, tapi kita dimungkinkan untuk mendirikan variabel reference konstanta menunjuk ke variabel biasa.

Contoh Program :

      #include <iostream>
      int main()
      {
          int a = 1;
          int const &b = a;

          std::cout<<b<<"\n";

          a = 2;
          std::cout<<b;

          return 0;
      }

# Perbedaan Pointer dan Reference

Berdasarkan penjelasan pointer pada artikel sebelumnya dan penjelasan mengenai reference di atas, sekelebat kita bisa menyimpulkan bahwa mereka memiliki kemiripan. Kedua hal tersebut memang sama-sama bisa menunjuk ke sebuah memori dari variabel atau obyek, kita bisa menyimpulkan mereka bersaudara tapi mereka berbeda jauh. Terdapat banyak perbedaan antara pointer dan reference.

Cara penggunaan reference sangat berbeda dengan pointer. Untuk mendirikan variabel pointer membutuhkan memori sedangkan variabel reference tidak membutuhkan memori. Reference tidak bisa didirikan jika tidak disertai inisialisasi sedangkan pointer inisialisasi merupakan opsional. Tujuan yang ditunjuk oleh pointer dapat kita ubah setelah deklarasi sedangkan reference tidak dimungkinkan. Reference berperan layaknya alias dari variabel lain, sedangkan pointer berperan sebagai variabel individual.

Contoh Program :

      #include <iostream>
      int main()
      {
          int myVar = 1;
          int &myRef = myVar;
          int *myPtr;

          std::cout<<myVar<<"\n";

          myRef = 2;
          std::cout<<myVar<<"\n";

          myPtr = &myVar;
          *myPtr = 3;

          std::cout<<myVar<<"\n";

          return 0;
      }

Fungsi dari variabel reference adalah variabel alias untuk memori dari variabel atau obyek lain yang sudah ada. Biasanya variabel reference digunakan dalam parameter (melakukan perubahan pada parameter sekaligus pada argumen), membuat jalan pintas (seperti mengakses member dari class yang memiliki jalan yang cukup panjang) dan lain-lain. Pada variabel reference bersifat konstanta kita dimungkinkan untuk menginisialisasi dengan nilai (bukan variabel), Nilai itu dapat berupa nilai tunggal atau merupakan operasi/ekspresi.

Rvalue merupakan nilai sumber dan lvalue merupakan memori tujuan. Sebenarnya pada saat proses penugasan (assignment) untuk mendirikan rvalue dibutuhkan memori yang bersifat sementara untuk memegang nilai tersebut, setelah pernyataan tersebut dijalankan maka memori itu akan segera dihancurkan. Tapi jika kita mendirikan variabel reference dengan inisialisasi berupa nilai maka hidup dari memori rvalue (sumber) akan bertahan lebih panjang sampai variabel reference dihancurkan. Di atas dijelaskan bahwa reference itu tidak memiliki memori dan berperan sebagai alias/pengenal dari suatu memori yang dapat berupa variabel atau obyek lain. Itulah alasanya kenapa memori rvalue dari variabel reference tidak dihancurkan.

      #include <iostream>
      int main()
      {
          int const &b = 2; //Hidup memori rvalue diperpanjang
          std::cout<<b<<"\n";
          return 0;
      }//memori rvalue dihancurkan bersamaan dengan variabel reference

Referensi Artikel:<br>
<a href="https://bundet.com">Bundet.</a><br><a href="https://www.belajarcpp.com">BelajarCPP.</a><br><br>
Referensi Source Code:<br>
<a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a><br>

-----
All Source Code is Modified.
