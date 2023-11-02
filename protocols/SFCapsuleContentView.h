
@protocol SFCapsuleContentView <NSObject>

@optional

- (id /* block */)buttonPointerStyleProvider:(void *)arg1; // needs 1 arg types, found 7: id /* block */, UIButton *, UIPointerEffect *, UIPointerShape *, void*, id, SEL
- (id /* block */)highlightObserver:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (double)horizontalPointerPaddingForButton:(UIView *)arg1;
- (bool)isHighlighted;
- (bool)isMinimized;
- (bool)isSelected;
- (double)keyContentBaselineBottomInset;
- (double)keyContentCapHeightTopInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyContentRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })keyContentTransform;
- (long long)layoutStyle;
- (NSNumber *)microphoneContentOriginX;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })microphoneContentTransform;
- (double)minimizationPercent;
- (double)nonKeyContentAlpha;
- (void)prepareForReuse;
- (void)setButtonPointerStyleProvider:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIPointerStyle *, id /* block */, UIButton *, UIPointerEffect *, UIPointerShape *, void*
- (void)setHighlightObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setHighlighted:(bool)arg1;
- (void)setKeyContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMicrophoneContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMinimizationPercent:(double)arg1;
- (void)setMinimized:(bool)arg1;
- (void)setNonKeyContentAlpha:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSizeUpdater:(id <SFCapsuleContentViewSizeUpdating>)arg1;
- (void)setTheme:(_SFBarTheme *)arg1;
- (void)setUnclippedContainer:(UIView *)arg1;
- (<SFCapsuleContentViewSizeUpdating> *)sizeUpdater;
- (_SFBarTheme *)theme;
- (UIView *)unclippedContainer;
- (void)willChangeToMinimized:(bool)arg1 coordinator:(id <SFTransitionCoordinating>)arg2;

@end
