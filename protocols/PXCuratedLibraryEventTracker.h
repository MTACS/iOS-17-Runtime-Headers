
@protocol PXCuratedLibraryEventTracker <PXViewControllerEventTracker>

@required

- (void)logAnalysisProgress:(float)arg1;
- (void)logLibraryItemsCount:(long long)arg1;

@end
