
@protocol CACNumberedElement <CACVoiceOverDescribable>

@required

- (long long)arrowOrientation;
- (long long)badgeIndicatorMask;
- (long long)badgePresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interfaceOrientedRectangle;
- (NSString *)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectangle;
- (NSString *)numberedLabel;
- (void)setArrowOrientation:(long long)arg1;
- (void)setBadgeIndicatorMask:(long long)arg1;
- (void)setBadgePresentation:(long long)arg1;
- (void)setLabelRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberedLabel:(NSString *)arg1;

@end
