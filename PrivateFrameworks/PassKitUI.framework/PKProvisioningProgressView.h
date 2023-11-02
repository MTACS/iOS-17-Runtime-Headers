
@interface PKProvisioningProgressView : UIView {
    LAUICheckmarkLayer * _checkmarkLayer;
    UIView * _headerView;
    UITextView * _primaryLabel;
    NSString * _primaryText;
    UILabel * _progressLabel;
    UIProgressView * _progressView;
    UIScrollView * _scrollView;
    UILabel * _secondaryLabel;
    bool  _showingCheckmark;
}

@property (nonatomic, readonly) LAUICheckmarkLayer *checkmarkLayer;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, readonly) UITextView *primaryLabel;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic, readonly) UILabel *progressLabel;
@property (nonatomic, readonly) UIProgressView *progressView;
@property (nonatomic, readonly) UILabel *secondaryLabel;
@property (getter=isShowingCheckmark, nonatomic) bool showingCheckmark;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 applyLayout:(bool)arg2;
- (void)_updateCheckmarkColor;
- (id)checkmarkLayer;
- (void)createViews;
- (id)headerView;
- (id)init;
- (bool)isShowingCheckmark;
- (void)layoutSubviews;
- (id)primaryLabel;
- (id)primaryText;
- (id)progressLabel;
- (id)progressView;
- (id)secondaryLabel;
- (void)setHeaderView:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setShowingCheckmark:(bool)arg1;
- (void)setShowingCheckmark:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
