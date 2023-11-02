
@interface GKChallengeListViewSectionHeader : UICollectionReusableView {
    NSLayoutConstraint * _leadingConstraint;
    UILabel * _secondaryLabel;
    UITapGestureRecognizer * _secondaryLabelTapGesture;
    id /* block */  _secondaryLabelTapHandler;
    UILabel * _titleLabel;
    NSLayoutConstraint * _trailingConstraint;
    bool  _wantsSecondaryLabel;
}

@property (nonatomic) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UITapGestureRecognizer *secondaryLabelTapGesture;
@property (nonatomic, copy) id /* block */ secondaryLabelTapHandler;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) NSLayoutConstraint *trailingConstraint;
@property (nonatomic) bool wantsSecondaryLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)leadingConstraint;
- (id)secondaryLabel;
- (id)secondaryLabelTapGesture;
- (id /* block */)secondaryLabelTapHandler;
- (void)secondaryLabelTapped:(id)arg1;
- (void)setLeadingConstraint:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryLabelTapGesture:(id)arg1;
- (void)setSecondaryLabelTapHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (void)setWantsSecondaryLabel:(bool)arg1;
- (id)titleLabel;
- (id)trailingConstraint;
- (bool)wantsSecondaryLabel;

@end
