document.querySelector('form').addEventListener('submit', function(e) {
    e.preventDefault();
    const name = document.querySelector('#name').value;
    const email = document.querySelector('#email').value;
    
    if (!name || !email) {
        alert("Please fill in all fields!");
    } else {
        alert("Booking submitted!");
        // Further processing, like sending form data to a server, goes here.
    }
});
