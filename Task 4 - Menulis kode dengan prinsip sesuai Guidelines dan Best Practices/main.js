// Fungsi untuk menghitung luas segitiga
function hitungLuas(event) {
    event.preventDefault(); // Mencegah reload halaman setelah form disubmit

    // Mengambil nilai dari input form
    const alas = parseFloat(document.getElementById('alas').value); // Mengambil nilai alas
    const tinggi = parseFloat(document.getElementById('tinggi').value); // Mengambil nilai tinggi

    // Validasi input untuk memastikan nilainya positif
    if (alas > 0 && tinggi > 0) {
        const luas = 0.5 * alas * tinggi; // Rumus menghitung luas segitiga
        document.getElementById('hasil').innerText = `Luas segitiga adalah ${luas.toFixed(2)} cm².`; // Menampilkan hasil perhitungan
    } else {
        document.getElementById('hasil').innerText = "Masukkan nilai positif untuk alas dan tinggi."; // Pesan kesalahan jika input tidak valid
    }
}
