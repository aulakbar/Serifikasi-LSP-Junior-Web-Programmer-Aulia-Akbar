// Fungsi untuk menangani klik tombol Submit
function handleSubmit(event) {
    event.preventDefault(); // Mencegah form submit yang default
    // Menampilkan pesan sukses
    document.getElementById('message').innerHTML = "Data berhasil disimpan";
    // Mengosongkan form setelah berhasil disubmit
    document.getElementById('biodataForm').reset();
}

// Fungsi untuk menangani klik tombol Cancel
function handleCancel() {
    // Mengosongkan form jika tombol Cancel ditekan
    document.getElementById('biodataForm').reset();
    // Menghapus pesan sukses jika ada
    document.getElementById('message').innerHTML = "";
}
