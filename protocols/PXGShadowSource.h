
@protocol PXGShadowSource <PXGLayoutContentSource>

@required

- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSShadow *)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;

@end
