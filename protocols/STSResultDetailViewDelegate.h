
@protocol STSResultDetailViewDelegate <NSObject>

@required

- (void)detailViewDidTapProvider:(STSResultDetailView *)arg1;
- (void)detailViewDidTapReportConcern:(STSResultDetailView *)arg1;
- (void)detailViewDidTapSend:(STSResultDetailView *)arg1;

@end
