
@protocol PXGAXGroupSource <NSObject>

@required

- (struct CGPoint { double x1; double x2; })axConvertPoint:(struct CGPoint { double x1; double x2; })arg1 fromDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGPoint { double x1; double x2; })axConvertPoint:(struct CGPoint { double x1; double x2; })arg1 toDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axFrame;
- (NSString *)axLocalizedLabel;
- (bool)axShouldBeConsideredAsSubgroup;
- (bool)axShouldSearchLeafsInSubgroups;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axVisibleRect;

@end
