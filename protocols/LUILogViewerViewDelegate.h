
@protocol LUILogViewerViewDelegate <NSObject>

@required

- (void)logViewerFilterButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerLeftCaretButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerRightCaretButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerViewClearButtontapped:(LUILogViewerView *)arg1;
- (void)logViewerViewCloseButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerViewLogButtonTapped:(LUILogViewerView *)arg1;

@end
