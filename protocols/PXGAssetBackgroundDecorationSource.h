
@protocol PXGAssetBackgroundDecorationSource <PXGLayoutContentSource>

@required

- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })assetBackgroundCornerRadiusForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (unsigned long long)assetBackgroundStyleForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (bool)wantsBackgroundForZeroInset;

@end
