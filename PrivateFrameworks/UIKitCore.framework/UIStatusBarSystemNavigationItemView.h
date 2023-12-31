
@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {
    UIButton * _button;
    int  _currentLabelCompressionLevel;
    double  _maxWidth;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) int currentLabelCompressionLevel;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (bool)_shouldLayoutImageOnRight;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (id)button;
- (int)currentLabelCompressionLevel;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (long long)labelLineBreakMode;
- (bool)layoutImageOnTrailingEdge;
- (double)maxWidth;
- (double)resetContentOverlap;
- (void)setButton:(id)arg1;
- (void)setCurrentLabelCompressionLevel:(int)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (id)title;
- (double)updateContentsAndWidth;
- (void)userDidActivateButton:(id)arg1;

@end
