
@interface PXStoryClipCompositionFactory : NSObject

+ (id)allDefaultCompositions;
+ (id)allSupportedCompositions;
+ (id)aspectFitOneUpComposition;
+ (id)defaultNUpCompositions;
+ (id)defaultOneUpCompositions;
+ (id)defaultThreeUpCompositions;
+ (id)defaultTwoUpCompositions;
+ (id)oneUpComposition;
+ (id)oneUpCompositionWithAspectRatioNumerator:(long long)arg1 denominator:(long long)arg2;
+ (id)oneUpCompositionsWithAspectRatioPassingTest:(id /* block */)arg1;
+ (id)supportedNUpCompositions;
+ (id)supportedOneUpCompositions;
+ (id)supportedThreeUpCompositions;
+ (id)supportedTwoUpAssetSplitCompositions;
+ (id)supportedTwoUpCompositions;
+ (id)threeUpHorizontalThirdsComposition;
+ (id)threeUpVerticalThirdsComposition;
+ (id)twoUpHalfLeadingHalfTrailingComposition;
+ (id)twoUpHalfTopHalfBottomComposition;
+ (id)twoUpOneThirdLeadingTwoThirdsTrailingAssetSplitComposition;
+ (id)twoUpOneThirdLeadingTwoThirdsTrailingComposition;
+ (id)twoUpOneThirdTopTwoThirdsBottomAssetSplitComposition;
+ (id)twoUpOneThirdTopTwoThirdsBottomComposition;
+ (id)twoUpTwoThirdsLeadingOneThirdTrailingAssetSplitComposition;
+ (id)twoUpTwoThirdsLeadingOneThirdTrailingComposition;
+ (id)twoUpTwoThirdsTopOneThirdBottomAssetSplitComposition;
+ (id)twoUpTwoThirdsTopOneThirdBottomComposition;

@end
