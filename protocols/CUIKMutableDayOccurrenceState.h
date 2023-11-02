
@protocol CUIKMutableDayOccurrenceState <CUIKOROccurrenceState>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRect;
- (long long)birthdayCount;
- (long long)horizontalSizeClass;
- (bool)isDimmed;
- (bool)isProposedTime;
- (bool)isSelected;
- (bool)isVibrant;
- (EKEvent *)occurrence;
- (void)setBackgroundRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBirthdayCount:(long long)arg1;
- (void)setHorizontalSizeClass:(long long)arg1;
- (void)setIsDimmed:(bool)arg1;
- (void)setIsProposedTime:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setIsVibrant:(bool)arg1;
- (void)setOccurrence:(EKEvent *)arg1;
- (void)setTopYBoundaryForText:(double)arg1;
- (void)setTraitCollection:(UITraitCollection *)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setVisibleHeight:(double)arg1;
- (double)topYBoundaryForText;
- (UITraitCollection *)traitCollection;
- (double)travelTime;
- (double)travelTimeHeight;
- (long long)userInterfaceStyle;
- (bool)usesSmallText;
- (double)visibleHeight;

@end
