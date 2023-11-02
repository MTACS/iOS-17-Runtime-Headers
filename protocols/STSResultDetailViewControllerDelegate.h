
@protocol STSResultDetailViewControllerDelegate <NSObject>

@required

- (void)detailViewControllerDidInsert:(STSResultDetailViewController *)arg1;
- (void)detailViewControllerDidReportConcern:(STSResultDetailViewController *)arg1 result:(SFSearchResult *)arg2 punchout:(SFPunchout *)arg3;
- (void)detailViewControllerDidSelectProviderLink:(STSResultDetailViewController *)arg1;

@end
