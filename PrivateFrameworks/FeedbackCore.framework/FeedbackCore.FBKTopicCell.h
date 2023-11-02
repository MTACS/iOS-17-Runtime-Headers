
@interface FeedbackCore.FBKTopicCell : UITableViewCell <FBKDiffableCell> {
    void disclosesMoreForms;
    void formDescriptions;
    void formName;
    void formStub;
    void itemIdentifier;
    void topicToBottomOfView;
}

@property (nonatomic) bool disclosesMoreForms;
@property (nonatomic) FBKQuestionCellTextView *formDescriptions;
@property (nonatomic) FBKBugFormLabel *formName;
@property (nonatomic, retain) FBKBugFormStub *formStub;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) NSLayoutConstraint *topicToBottomOfView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)disclosesMoreForms;
- (id)formDescriptions;
- (id)formName;
- (id)formStub;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (void)setDisclosesMoreForms:(bool)arg1;
- (void)setFormDescriptions:(id)arg1;
- (void)setFormName:(id)arg1;
- (void)setFormStub:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setTopicToBottomOfView:(id)arg1;
- (id)topicToBottomOfView;

@end
