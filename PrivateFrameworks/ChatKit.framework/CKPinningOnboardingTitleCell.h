
@interface CKPinningOnboardingTitleCell : UICollectionViewCell {
    bool  _isInCollapsedState;
    UILayoutGuide * _labelMarginGuide;
    NSLayoutConstraint * _leadingMarginLayoutConstraint;
    long long  _pinnedConversationViewLayoutStyle;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleSpacingConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _trailingMarginLayoutConstraint;
}

@property (nonatomic) bool isInCollapsedState;
@property (nonatomic, retain) UILayoutGuide *labelMarginGuide;
@property (nonatomic, retain) NSLayoutConstraint *leadingMarginLayoutConstraint;
@property (nonatomic) long long pinnedConversationViewLayoutStyle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *subtitleSpacingConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *trailingMarginLayoutConstraint;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInCollapsedState;
- (id)labelMarginGuide;
- (id)leadingMarginLayoutConstraint;
- (long long)pinnedConversationViewLayoutStyle;
- (double)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(long long)arg1;
- (double)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(long long)arg1;
- (id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(long long)arg1 inCollapsedState:(bool)arg2;
- (void)setIsInCollapsedState:(bool)arg1;
- (void)setLabelMarginGuide:(id)arg1;
- (void)setLeadingMarginLayoutConstraint:(id)arg1;
- (void)setPinnedConversationViewLayoutStyle:(long long)arg1;
- (void)setPinnedConversationViewLayoutStyle:(long long)arg1 collapsedState:(bool)arg2;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleSpacingConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingMarginLayoutConstraint:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleSpacingConstraint;
- (id)titleLabel;
- (id)trailingMarginLayoutConstraint;
- (void)updateConstraints;

@end
