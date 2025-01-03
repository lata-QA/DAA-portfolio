<section>
    <h2>Business Cases Identified:</h2>
<table border="1">
    <thead>
        <tr>
            <th>SL NO</th>
            <th>Business Case Identified</th>
            <th>Description</th>
            <th>Owner</th>
            <th>Probable Tools</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td>Student Admission Management</td>
            <td>Develop automated system that streamlines the application process, including form submission, document verification, and seat allocation.</td>
            <td>Anuja H</td>
            <td>Hash Table, Priority Queue, Balanced Binary Trees(AVL/R-B Tree)</td>
        </tr>
        <tr>
            <td>2</td>
            <td>Course Scheduling</td>
            <td>Use greedy algorithm, where courses are assigned to available time slots based on constraints like instructor availability, room size, and student preferences.</td>
            <td>Rashmi K</td>
            <td>BST, Backtracking, Graphs</td>
        </tr>
        <tr>
            <td>3</td>
            <td>Faculty Recruitment and Management</td>
            <td>Implementing an automated application and screening system, where candidates submit resumes and are evaluated based on predefined criteria.</td>
            <td>Lata R</td>
            <td>Hash Table, Priority Queue, Balanced Binary Trees(AVL/R-B Tree)</td>
        </tr>
        <tr>
            <td>4</td>
            <td>Students Performance Tracking</td>
            <td>Developing centralized system that stores and updates academic data such as grades, attendance, and assignments.</td>
            <td>Manasi D</td>
            <td>Arrays, Linked list, BST</td>
        </tr>
        <tr>
            <td>5</td>
            <td>Parking Management</td>
            <td>Implementing an automated application and screening system, where candidates submit resumes and are evaluated based on predefined criteria.</td>
            <td>Rashmi & Lata R</td>
            <td>Hash Maps, Trees, Priority Queue</td>
        </tr>
        <tr>
            <td>6</td>
            <td>Feedback and Quality Assurance</td>
            <td>Developing centralized system that stores and updates academic data such as grades, attendance, and assignments.</td>
            <td>Anuja H & Manasi</td>
            <td>Priority Queue, Dijkstra Algorithm</td>
        </tr>
    </tbody>
</table>   
    <section>
          <br>
        <br>
        <section>
            <h2>SDG Goals</h2>
<p>The Sustainable Development Goals (SDGs) play a vital role in ensuring the long-term sustainability of University Processes in Rajpur. The following SDGs are particularly relevant to this project:</p>

<ul>
    <li><strong>SDG 4 - Quality Education:</strong> <p>Initiatives such as Student Admission Management, Course Scheduling, and Performance Tracking aim to improve access, efficiency, and quality in education systems.<p></li>
    <li><strong>SDG 10 - Reduced Inequalities:</strong> <p>Streamlining admissions and feedback systems ensures fair access to education and resources for all students, irrespective of socioeconomic background.<p></li>
    <li><strong>SDG 11 - Sustainable Cities and Communities:</strong> <p>Parking Management and efficient student admissions contribute to the sustainable management of urban infrastructure.<p></li>
</ul>

        </section>

</section>
<h1>Business Cases Implementation</h1>
    <h2>Business Case: Faculty Recruitment And Management</h2>
        <p>The Faculty Recruitment And Management aligns with the following Sustainable Development Goals (SDGs):</p>
        <ul>
            <li>
                <h2>SDG 4: Quality Education</h2>
                <p>Ensures inclusive and equitable quality education and promotes lifelong learning opportunities for all through a streamlined and accessible admission process.</p>
            </li>
            <li>
                <h2>SDG 10: Reduced Inequalities</h2>
                <p>Promotes fairness and transparency in the admission process, reducing biases and ensuring equal opportunities for students from diverse backgrounds.</p>
            </li>
        </ul>
    <p>Implementation by using <strong>Hash Tables</strong>, <strong>Priority Queue</strong>, and <strong>Balanced Trees</strong> (AVL Trees).</p>
    
<div class="section">
        <h3>1.Balanced Trees (AVL Trees)</h3>
        <p><strong>Use Case:</strong> Operations such as insertion and traversal are efficient, with 
            O(logn) complexity due to the self-balancing nature of AVL Trees.</p>
        <p><strong>Example Implementation:</strong></p>
        <ul>
            <li>Insertion.</li>
            <li>In-Order Traversal.</li>
            <li>Balancing the Tree.</li>
        </ul>
        <p><strong>Algorithm:</strong></p>
        <p><strong>AVL Trees</strong> are the most intuitive and relevant for:</p>
        <ul>
            <li><strong> Efficient Sorting:</strong> Balance Guarantee.</li>
            <li><strong>Searching for Specific Data:</strong> Real-Time Data Handling.</li>
        </ul>
       <a href="facultyby_AVL.txt" target="_blank">click here</a>
     </div>
    
    <div class="section">
        <h3>2. Priority Queue</h3>
        <p><strong>Use Case:</strong> Process applications based on priority (e.g., merit, reservation, or first-come-first-serve).</p>
        <p><strong>Example Implementation:</strong></p>
        <ul>
            <li><strong>Priority:</strong> Merit scores or time of application.</li>
            <li><strong>Data Structure:</strong> Min-heap or Max-heap.</li>
        </ul>
        <p><strong>Advantages:</strong></p>
        <ul>
            <li>Guarantees the highest-priority application is processed first.</li>
            <li>Efficient insertion and extraction (<code>O(log n)</code>).</li>
        </ul>
        <a href="facultyby_QUEUE.txt" target="_blank">click here</a>
    </div>

    <div class="section">
        <h3>3. Hash Table</h3>
        <p><strong>Use Case:</strong> Efficiently store and retrieve student records.</p>
        <p><strong>Example Implementation:</strong></p>
        <ul>
            <li><strong>Key:</strong> Student ID or unique application number.</li>
            <li><strong>Value:</strong> Details like name, scores, preferences, and status.</li>
        </ul>
        <p><strong>Advantages:</strong></p>
        <ul>
            <li>Fast lookups for student data (<code>O(1)</code> on average).</li>
            <li>Easily update records during the admission process.</li>
        </ul>
        <a href="facultybyHASH.txt" target="_blank">click here</a>
    </div>

</section>
