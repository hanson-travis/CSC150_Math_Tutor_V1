# Silly Math Tutor — Release v0.0.0

A tiny console program that quizzes the user with a few **addition** problems. Designed
to leverage our knowledge gained while working through Chapters 1 and 2 of ZyBooksC++.

## ToDo
* Update this README after everything is complete.
* Remove all of the done items once done.  Leave the ToDo section for future use.

## Program behavior (MVP) //ToDo this section needs updating

* Fixed set of **5 addition questions** (pre-chosen numbers; no randomness).
* Entire program is written in **one file** and **one function** (`main()`), organized 
  with big section comments (see “Code sections” below).
* Assumes the user types **integers**.
* No error handling exists at this point.

## Code sections (plan for `main()`)  // ToDo this section needs updating

1. **Header comment & declarations**

   * Program name, author, date, one-line description
   * Declarations: `questionCount` (const), `score`, `leftOperand`, `rightOperand`, `userAnswer`, `correctAnswer`
2. **Greeting & instructions**
3. **Question 1** (prompt → read → check → feedback → update score)
4. **Question 2**
5. **Question 3**
6. **Question 4**
7. **Question 5**
8. **Final statement & exit line**

> Tip: Use big, consistent comment banners like `// ===== 3) Question 1 =====` so each section reads like a mini-routine.

## Prompt script (exact wording) // ToDo this section needs updating.

You can copy these lines directly into your output statements to keep results stable:

```
Welcome to Silly Math Tutor!
You’ll answer 5 quick addition problems. Type the answer and press Enter.

Q1) 7 + 5 = ?
Q2) 12 + 9 = ?
Q3) 25 + 17 = ?
Q4) 48 + 27 = ?
Q5) 3 + 14 = ?

All done!
You answered ??? out of 5 correctly. Nice work!
(Thanks for trying Silly Math Tutor!)
```

## Variables & constants (names + purpose)

* decide as a team and fill in here.

## How to build & run

* provide instructions once decided.

## Manual test checklist

* [ ] Header prints
* [ ] cin and cout works
* [ ] standard namespace used
* [ ] main function works
* [ ] declare and initialize variables
* [ ] ascii art looks nice
* [ ] fun math jokes or facts?
* [ ] get the user's name and welcome them.
* [ ] refer to them by name
* [ ] display a math question
* [ ] get the answer
* [ ] display a closing message
* [ ] end the program (return 0)
* [ ] close main()

---

## Sample run (paste an actual transcript here) - here is an example

```
Welcome to Silly Math Tutor!
You’ll answer 5 quick addition problems. Type the answer and press Enter.

Q1) 7 + 5 = ?
12
Correct!

Q2) 12 + 9 = ?
20
Not quite, the answer is 21.

Q3) 25 + 17 = ?
42
Correct!

Q4) 48 + 27 = ?
75
Correct!

Q5) 3 + 14 = ?
17
Correct!

All done!
You answered 4 out of 5 correctly. Nice work!
(Thanks for trying Silly Math Tutor!)
```

---

## Repository structure

```
CSC150_Math_Tutor_V1/
├─ src/
│  └─ main.cpp                 ← all code lives here (Ch.1–2)
├─ docs/
│  └─ Peer Feedback - Template.docx  (or your filled form)
├─ CMakeLists.txt
├─ README.md
└─ .gitignore

```

---

## Source Control Collaboration

* **Branch naming**: `feature/prompt-script`, `feature/q1-q5`, `chore/readme-sample-run`
* **Commit messages**: small, clear, imperative (“Add greeting and instructions”)
* **Pull Requests**: title = the task; description = what changed + how to test

##  Versioning
* Use **Semantic Versioning**
  * Example `v1.1.0` (vMajor.Minor.Update)
    * MAJOR - Breaking changes (For us, lets consider them major updates or the final stable release for the assignment)
    * MINOR - Intermittent Changes that incrementally move us toward the release
    * UPDATE - bug fixes or slight adjustments to previously checked in code. Does not add new capabilities.
* The first release considered to be "done" is `v1.0.0`.


---

## Style & grading hygiene

* Clear, friendly **prompts** (no abbreviations)
* Consistent **indentation** and **spaces around operators**
* **Comments**: explain intent at the top of each section, not every single line
* Keep to **Chapter 1** features—no extra libraries, no custom namespaces, no functions yet

---

## Known limitations

* Assumes valid integer input (no error handling).
* Only addition; no randomness (deterministic set of questions).

---

## Future ideas (after Chapter 1)

* Randomized operands with difficulty ranges
* Multiple operations (+, −, ×)
* Name prompt and personalized feedback
* Score percentages and simple grading

---

## Academic honesty note

If you receive assistance (from a person or AI) on specific wording or ideas, add a brief note in comments like:
`// Assisted by <source>: <what/why> (date)`
This Readme was prompted by Travis Hanson and provided by ChatGPT5 on August 25, 2025. Travis reviewed and made several edits.
