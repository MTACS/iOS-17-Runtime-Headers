
@interface FeedbackCore.FBKModalQuestionCell : UITableViewCell <FBKDiffableCell> {
    void itemIdentifier;
    void question;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question;

+ (id)reuseIdentifier;
+ (void)setReuseIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)question;
- (void)setItemIdentifier:(id)arg1;
- (void)setQuestion:(id)arg1;

@end
