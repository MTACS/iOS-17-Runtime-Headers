
@protocol PXGTapbackDecorationSource <PXGLayoutContentSource>

@required

- (bool)hasTapbacksForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })tapbackConfigurationForProposedConfiguration:(struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1 spriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (bool)wantsTapbackDecorationInLayout:(PXGLayout *)arg1;

@end
