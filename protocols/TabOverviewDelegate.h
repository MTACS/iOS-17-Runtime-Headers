
@protocol TabOverviewDelegate <TabThumbnailCollectionViewDelegate>

@required

- (TabOverviewItem *)currentItemForTabOverview:(TabOverview *)arg1;
- (NSArray *)itemsToKeepVisibleForTabOverview:(TabOverview *)arg1;
- (void)tabOverview:(TabOverview *)arg1 closeItems:(NSArray *)arg2;
- (void)tabOverview:(TabOverview *)arg1 willInteractivelyCloseItem:(TabOverviewItem *)arg2;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewWillUpdateInteractivePresentation:(TabOverview *)arg1;

@optional

- (double)tabOverviewAdditionalItemHeaderHeight:(TabOverview *)arg1;

@end
