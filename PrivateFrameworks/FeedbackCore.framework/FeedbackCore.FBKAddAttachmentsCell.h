
@interface FeedbackCore.FBKAddAttachmentsCell : UITableViewCell <FBKDiffableCell> {
    void button;
    void itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) UIMenu *menu;

+ (bool)supportsMenu;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)menu;
- (void)setItemIdentifier:(id)arg1;
- (void)setMenu:(id)arg1;

@end
