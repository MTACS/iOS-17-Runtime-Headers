
@protocol CUIKOROccurrenceState <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRect;
- (long long)birthdayCount;
- (long long)horizontalSizeClass;
- (bool)isDimmed;
- (bool)isProposedTime;
- (bool)isSelected;
- (bool)isVibrant;
- (EKEvent *)occurrence;
- (double)topYBoundaryForText;
- (UITraitCollection *)traitCollection;
- (double)travelTime;
- (double)travelTimeHeight;
- (long long)userInterfaceStyle;
- (bool)usesSmallText;
- (double)visibleHeight;

@end
