
@interface CAMSemanticStyleMaskedBadge : UIView {
    NSTimer * __badgeUpdateLockoutTimer;
    NSString * __cachedText;
    double  _badgeLeftInset;
    CEKBadgeTextView * _badgeView;
    long long  _orientation;
    CAMSemanticStyle * _semanticStyle;
}

@property (nonatomic, retain) NSTimer *_badgeUpdateLockoutTimer;
@property (nonatomic, retain) NSString *_cachedText;
@property (nonatomic) double badgeLeftInset;
@property (nonatomic, readonly) CEKBadgeTextView *badgeView;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CAMSemanticStyle *semanticStyle;

- (void).cxx_destruct;
- (id)_badgeUpdateLockoutTimer;
- (id)_cachedText;
- (void)_handleBadgeUpdateLockoutTimerFired:(id)arg1;
- (void)_requestTextUpdateDelayIfNeeded:(bool)arg1;
- (double)badgeLeftInset;
- (id)badgeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)orientation;
- (id)semanticStyle;
- (void)setBadgeLeftInset:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyle:(id)arg1 delayIfNeeded:(bool)arg2;
- (void)set_badgeUpdateLockoutTimer:(id)arg1;
- (void)set_cachedText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
