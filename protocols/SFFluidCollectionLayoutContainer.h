
@protocol SFFluidCollectionLayoutContainer <NSObject>

@required

- (<UICoordinateSpace> *)coordinateSpace;
- (<SFFluidCollectionDataContainer> *)dataContainer;
- (void)layoutWasInvalidatedWithContext:(SFFluidCollectionViewLayoutInvalidationContext *)arg1;

@end
