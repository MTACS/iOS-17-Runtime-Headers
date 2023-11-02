
@protocol CRWrappingEvaluationResult <NSObject>

@required

- (bool)contributesToVerticalSpacing;
- (<CRLayoutLine> *)featureInTest;
- (struct CGSize { double x1; double x2; })featureInTestSize;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })featureTokens;
- (bool)isOversegmented;
- (bool)matchingLocales;
- (NSString *)paragraphText;
- (NSObject<CRWrappingEvaluationResult> *)resultByMerging:(NSObject<CRWrappingEvaluationResult> *)arg1;
- (double)verticalSpacing;
- (double)verticalSpacingToHeightRatio;

@end
