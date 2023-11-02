
@protocol PXGadgetAnchorHelperDelegate

@required

- (bool)anchorHelper:(PXGadgetAnchorHelper *)arg1 indexPathIsFullyVisible:(NSIndexPath *)arg2;
- (NSArray *)sortedVisibleIndexPathsForAnchorHelper:(PXGadgetAnchorHelper *)arg1;

@end
