
@protocol PXGLayoutScrollDelegate

@required

- (NSObject<UICoordinateSpace> *)contentCoordinateSpaceForLayout:(PXGLayout *)arg1;
- (void)setNeedsUpdateOfScrollableAxisForLayout:(PXGLayout *)arg1;

@end
