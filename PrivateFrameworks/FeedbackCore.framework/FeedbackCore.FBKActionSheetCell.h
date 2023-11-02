
@interface FeedbackCore.FBKActionSheetCell : UITableViewCell {
    void actionImageView;
    void actionTitleLabel;
}

@property (nonatomic, retain) UIImageView *actionImageView;
@property (nonatomic, retain) UILabel *actionTitleLabel;

- (void).cxx_destruct;
- (id)actionImageView;
- (id)actionTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionImageView:(id)arg1;
- (void)setActionTitleLabel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
