
@interface FeedbackCore.FBKDateTimeCell : UITableViewCell <FBKDiffableCell> {
    void answer;
    void datePicker;
    void editorDelegate;
    void itemIdentifier;
    void question;
    void questionLabel;
}

@property (nonatomic, retain) FBKAnswer *answer;
@property (nonatomic) UIDatePicker *datePicker;
@property (nonatomic) <FBKBugFormEditorDelegate> *editorDelegate;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question;
@property (nonatomic) UILabel *questionLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)answer;
- (void)awakeFromNib;
- (void)dateDidChange:(id)arg1;
- (id)datePicker;
- (id)editorDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)question;
- (id)questionLabel;
- (void)setAnswer:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setEditorDelegate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setQuestionLabel:(id)arg1;

@end
