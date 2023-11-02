
@protocol PXGDebugDecorationSource <PXGLayoutContentSource>

@required

- (NSDictionary *)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id <PXDisplayAsset>)arg2 inLayout:(PXGLayout *)arg3;
- (bool)wantsDebugDecorationInLayout:(PXGLayout *)arg1;

@end
