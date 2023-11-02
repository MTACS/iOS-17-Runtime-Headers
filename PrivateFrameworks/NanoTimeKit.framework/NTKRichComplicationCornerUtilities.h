
@interface NTKRichComplicationCornerUtilities : CDRichComplicationCornerUtilities

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_keylinePaddingForPosition:(long long)arg1 conentSize:(struct CGSize { double x1; double x2; })arg2 forDevice:(id)arg3 narrowTopSlots:(bool)arg4;
+ (id)keylineImageForPosition:(long long)arg1 filled:(bool)arg2 forDevice:(id)arg3 narrowTopSlots:(bool)arg4;
+ (id)keylineViewForPosition:(long long)arg1 forDevice:(id)arg2 narrowTopSlots:(bool)arg3;
+ (id)layoutRuleForState:(long long)arg1 position:(long long)arg2 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forDevice:(id)arg4 narrowTopSlots:(bool)arg5;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForState:(long long)arg1 position:(long long)arg2 device:(id)arg3;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (struct CGSize { double x1; double x2; })viewSizeForDevice:(id)arg1;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;

@end
