
@protocol PXGSolidColorOverlayDecorationSource <PXGLayoutContentSource>

@required

- (double)solidColorOverlayAlphaForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (UIColor *)solidColorOverlayForLayout:(PXGLayout *)arg1;

@end
