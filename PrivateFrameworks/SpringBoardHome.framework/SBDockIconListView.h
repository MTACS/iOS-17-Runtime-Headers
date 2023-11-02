
@interface SBDockIconListView : SBIconListView

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrameForOrientation:(long long)arg1;
+ (double)defaultHeight;
+ (unsigned long long)defaultIconViewConfigurationOptions;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)adaptsOrientationToTraitCollection;
- (bool)allowsAddingIconCount:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;
- (bool)isVertical;

@end
