
@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>

@optional

- (UIImage *)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 currentImageForAssetReference:(PUAssetReference *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 rectForAssetReference:(PUAssetReference *)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (PXRegionOfInterest *)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 regionOfInterestForAssetReference:(PUAssetReference *)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 scrollAssetReferenceToVisible:(PUAssetReference *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldDisableScroll:(bool)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldHideAssetReferences:(NSSet *)arg2;

@end
