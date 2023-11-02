
@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView {
    NSLayoutConstraint * _bottomToTitleLastBaselineConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomToTitleLastBaselineConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)bottomToTitleLastBaselineConstraint;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setBottomToTitleLastBaselineConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUpUI;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraintConstants;

@end
