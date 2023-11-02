
@interface HPSSpatialProfileCrossHairs : BKUIPearlCrossHairsView

- (id)initWithView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2;
- (void)nudgeCustomDirection:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)nudgeInDirection:(unsigned long long)arg1 smallNudgePeak:(id /* block */)arg2 largeNudgePeak:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
