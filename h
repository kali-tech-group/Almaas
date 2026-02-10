<!DOCTYPE html>
<html lang="ta">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Almaas Healthcare Academy | Elite Medical Mastery</title>
    <link href="https://fonts.googleapis.com/css2?family=Cinzel+Decorative:wght@700&family=Outfit:wght@200;400;700&display=swap" rel="stylesheet">
    <link href="https://unpkg.com/aos@2.3.1/dist/aos.css" rel="stylesheet">
    
    <style>
        :root {
            --primary: #002b2b;
            --accent: #d4af37;
            --gold-gradient: linear-gradient(135deg, #d4af37 0%, #f7e695 50%, #d4af37 100%);
            --white: #ffffff;
            --dark: #050a0a;
        }

        * { margin: 0; padding: 0; box-sizing: border-box; font-family: 'Outfit', sans-serif; scroll-behavior: smooth; }
        body { background: #fdfdfd; overflow-x: hidden; color: var(--primary); }

        /* --- Full Screen Parallax Hero --- */
        .hero {
            height: 100vh;
            background: linear-gradient(rgba(0,43,43,0.85), rgba(5,10,10,0.9)), 
                        url('https://images.unsplash.com/photo-1551076805-e1869033e561?auto=format&fit=crop&q=80&w=2000');
            background-size: cover; background-attachment: fixed;
            display: flex; flex-direction: column; align-items: center; justify-content: center;
            color: var(--white); text-align: center; position: relative;
        }

        .hero h1 { 
            font-family: 'Cinzel Decorative', serif; font-size: clamp(3rem, 10vw, 7rem); 
            background: var(--gold-gradient); -webkit-background-clip: text; -webkit-text-fill-color: transparent;
            filter: drop-shadow(0 0 15px rgba(212,175,55,0.4));
            margin-bottom: 10px;
        }

        .hero p { font-size: 1.2rem; text-transform: uppercase; letter-spacing: 12px; font-weight: 200; }

        /* --- Navigation --- */
        nav {
            position: fixed; width: 100%; padding: 25px 10%; z-index: 1000;
            display: flex; justify-content: space-between; align-items: center;
            transition: 0.6s cubic-bezier(0.4, 0, 0.2, 1);
        }
        nav.sticky { background: rgba(255,255,255,0.98); padding: 15px 10%; box-shadow: 0 10px 30px rgba(0,0,0,0.08); }
        .logo { font-family: 'Cinzel Decorative', serif; font-size: 1.8rem; color: var(--accent); }

        /* --- 3D Hover Course Cards --- */
        .container { padding: 120px 10%; }
        .section-header { text-align: center; margin-bottom: 100px; }
        .section-header h2 { font-family: 'Cinzel Decorative', serif; font-size: 3.5rem; color: var(--primary); }
        
        .course-grid {
            display: grid; grid-template-columns: repeat(auto-fit, minmax(320px, 1fr)); gap: 40px;
        }

        .elite-card {
            background: var(--white);
            padding: 50px 35px; border-radius: 40px;
            box-shadow: 20px 20px 60px #d9d9d9, -20px -20px 60px #ffffff;
            transition: 0.5s ease; position: relative; overflow: hidden;
            border: 1px solid rgba(212,175,55,0.1);
        }

        .elite-card:hover { 
            transform: translateY(-15px); 
            background: var(--primary); color: white;
            box-shadow: 0 40px 80px rgba(0, 43, 43, 0.2);
        }

        .elite-card:hover h3, .elite-card:hover .duration { color: var(--white); }

        .elite-card h3 { color: var(--primary); font-family: 'Cinzel Decorative', serif; font-size: 1.4rem; margin-bottom: 15px; min-height: 60px; }
        .elite-card .duration { color: var(--accent); font-weight: bold; font-size: 0.9rem; margin-bottom: 25px; display: block; letter-spacing: 2px; }

        /* --- Luxury Button --- */
        .btn-premium {
            padding: 15px 30px; background: transparent; border: 2px solid var(--accent);
            color: var(--accent); text-decoration: none; border-radius: 5px;
            font-weight: bold; text-transform: uppercase; letter-spacing: 3px;
            display: inline-block; transition: 0.4s; font-size: 0.8rem;
        }
        .elite-card:hover .btn-premium { background: var(--accent); color: var(--primary); }

        /* --- WhatsApp Floating (Luxury Glow) --- */
        .wa-luxury {
            position: fixed; bottom: 50px; right: 50px; background: #25d366; 
            width: 75px; height: 75px; border-radius: 50%;
            display: flex; align-items: center; justify-content: center;
            box-shadow: 0 15px 40px rgba(37, 211, 102, 0.4); z-index: 1000;
        }

        @media (max-width: 768px) {
            .hero h1 { font-size: 3.2rem; }
            .container { padding: 60px 5%; }
        }
    </style>
</head>
<body>

    <nav id="navbar">
        <div class="logo"> </div>
        <a href="https://wa.me/918825824124" class="btn-premium" style="padding: 10px 20px;">Contact Elite</a>
    </nav>

    <section class="hero">
        <div data-aos="fade-down" data-aos-duration="2000">
            <h1>Almaas Healthcare Academy</h1>
            <p>Mastering The Medical Arts</p>
            <br>
            <a href="#courses" class="btn-premium" style="font-size: 1.1rem; padding: 18px 45px;">Begin Your Legacy</a>
        </div>
    </section>

    <div class="container" id="courses">
        <div class="section-header" data-aos="fade-up">
            <h2>Our Global Curriculum</h2>
            <p style="color: #888; letter-spacing: 4px; margin-top: 15px;">WHERE COMPASSION MEETS ELITE SCIENCE</p>
        </div>

        <div class="course-grid">
            <div class="elite-card" data-aos="fade-up">
                <h3>Accident & Emergency Technology</h3><span class="duration">2 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE032" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up" data-aos-delay="100">
                <h3>Emergency Patient Care Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE033" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up" data-aos-delay="200">
                <h3>Post Diploma in Patient Care Mgmt</h3><span class="duration">2 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE034" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Physiotherapy Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE035" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Diploma in Physician Assistant</h3><span class="duration">2 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE040" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Diploma in Critical Care Mgmt</h3><span class="duration">2 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE041" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>ICU Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE042" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Certificate in Dietician</h3><span class="duration">1 YEAR COURSE</span>
                <a href="https://wa.me/918825824124?text=AHE043" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Dental Hygienist</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE049" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>General Healthcare & Maternity</h3><span class="duration">2 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE052" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Audio-Metry Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE053" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Diploma in Laproscopy Assistant</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE055" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Medical Transcript Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE058" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Diploma in Optometry</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE062" class="btn-premium">Enroll Now</a>
            </div>
            <div class="elite-card" data-aos="fade-up">
                <h3>Diploma in Anesthesia Technician</h3><span class="duration">1 YEAR DIPLOMA</span>
                <a href="https://wa.me/918825824124?text=AHE063" class="btn-premium">Enroll Now</a>
            </div>
        </div>
    </div>

    <footer style="background: var(--dark); padding: 80px 10%; text-align: center; color: white;">
        <h2 style="font-family: 'Cinzel Decorative'; color: var(--accent); margin-bottom: 20px;">ALMAAS ACADEMY</h2>
        <p style="opacity: 0.6; letter-spacing: 5px;">CRAFTING MEDICAL LEGENDS</p>
    </footer>

    <a href="https://wa.me/918825824124" class="wa-luxury">
        <img src="https://upload.wikimedia.org/wikipedia/commons/6/6b/WhatsApp.svg" width="40" alt="WA">
    </a>

    <script src="https://unpkg.com/aos@2.3.1/dist/aos.js"></script>
    <script>
        AOS.init({ duration: 1000, once: true });
        window.addEventListener("scroll", function() {
            var nav = document.querySelector("#navbar");
            nav.classList.toggle("sticky", window.scrollY > 0);
        });
    </script>
</body>
</html>