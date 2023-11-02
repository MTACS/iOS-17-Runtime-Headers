
@protocol PXLibrarySummaryDataSource <NSObject>

@optional

- (bool)curatedLibrarySummaryHelperShouldUpdateImmediately:(PXCuratedLibrarySummaryHelper *)arg1;
- (<PXDisplayAssetCollection> *)topMostAssetCollection;
- (<PXBrowserVisibleContentSnapshot> *)visibleContentSnapshot;

@end
