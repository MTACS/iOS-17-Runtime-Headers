
@interface FeedbackCore.FBKSliderCell : UITableViewCell <FBKDiffableCell> {
    void answer;
    void answerLabel;
    void editorDelegate;
    void itemIdentifier;
    void question;
    void questionLabel;
    void slider;
}

@property (nonatomic, retain) FBKAnswer *answer;
@property (nonatomic) UILabel *answerLabel;
@property (nonatomic) <FBKBugFormEditorDelegate> *editorDelegate;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question;
@property (nonatomic) UILabel *questionLabel;
@property (nonatomic) UISlider *slider;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)answer;
- (id)answerLabel;
- (void)awakeFromNib;
- (id)editorDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)question;
- (id)questionLabel;
- (void)setAnswer:(id)arg1;
- (void)setAnswerLabel:(id)arg1;
- (void)setEditorDelegate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setQuestionLabel:(id)arg1;
- (void)setSlider:(id)arg1;
- (id)slider;
- (void)sliderTouchUpInside:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)updateSliderAndLabel;

@end
