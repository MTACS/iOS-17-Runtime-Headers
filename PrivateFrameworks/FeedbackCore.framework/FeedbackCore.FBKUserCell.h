
@interface FeedbackCore.FBKUserCell : UITableViewCell <FBKDiffableCell> {
    void itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (void)setItemIdentifier:(id)arg1;
- (void)updateWithUser:(id)arg1;

@end
