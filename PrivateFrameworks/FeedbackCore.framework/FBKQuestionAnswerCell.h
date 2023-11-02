
@interface FBKQuestionAnswerCell : UITableViewCell <FBKDiffableCell> {
    FBKAnswer * _answer;
    FBKQuestionCellTextView * _answerTextView;
    <FBKBugFormEditorDelegate> * _bugFormEditorDelegate;
    NSString * _diffableIdentifier;
    UIImageView * _errorArrow;
    bool  _hasKeyboardFocus;
    bool  _hasPlaceholder;
    FBKQuestion * _question;
    UILabel * _questionLabel;
    bool  _showError;
    NSString * itemIdentifier;
}

@property (nonatomic, retain) FBKAnswer *answer;
@property (nonatomic) FBKQuestionCellTextView *answerTextView;
@property (nonatomic) <FBKBugFormEditorDelegate> *bugFormEditorDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *diffableIdentifier;
@property (nonatomic, retain) UIImageView *errorArrow;
@property (nonatomic) bool hasKeyboardFocus;
@property (nonatomic) bool hasPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question;
@property (nonatomic) UILabel *questionLabel;
@property (nonatomic) bool showError;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)answer;
- (id)answerTextView;
- (void)awakeFromNib;
- (void)beginEditingQuestion;
- (id)bugFormEditorDelegate;
- (void)commonInit;
- (id)diffableIdentifier;
- (void)endEditingQuestion;
- (id)errorArrow;
- (bool)hasKeyboardFocus;
- (bool)hasPlaceholder;
- (void)hideAccessoryView;
- (void)hideErrorArrow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)question;
- (id)questionLabel;
- (void)sanitizeAnswer:(id)arg1;
- (void)saveAnswer;
- (void)setAnswer:(id)arg1;
- (void)setAnswerTextView:(id)arg1;
- (void)setBugFormEditorDelegate:(id)arg1;
- (void)setDiffableIdentifier:(id)arg1;
- (void)setErrorArrow:(id)arg1;
- (void)setHasKeyboardFocus:(bool)arg1;
- (void)setHasPlaceholder:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setQuestionLabel:(id)arg1;
- (void)setShowError:(bool)arg1;
- (bool)shouldAllowEditing;
- (void)showAccessoryView;
- (bool)showError;
- (void)showErrorArrow;
- (void)updateErrorArrow;

@end
