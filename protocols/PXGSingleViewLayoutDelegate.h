
@protocol PXGSingleViewLayoutDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })singleViewLayout:(PXGSingleViewLayout *)arg1 desiredSizeForReferenceSize:(struct CGSize { double x1; double x2; })arg2;

@optional

- (void)appearStateDidChangeForSingleViewLayout:(PXGSingleViewLayout *)arg1;
- (<PXGSingleViewLayoutConfiguration> *)configurationForSingleViewLayout:(PXGSingleViewLayout *)arg1;
- (PXGHitTestResult *)singleViewLayout:(PXGSingleViewLayout *)arg1 hitTestResultForSpriteReference:(PXGSpriteReference *)arg2;

@end
