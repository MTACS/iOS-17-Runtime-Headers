
@protocol MNNavigationTraceManagerDelegate <NSObject>

@required

- (void)navigationTraceManager:(MNNavigationTraceManager *)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationTraceManagerDidFailToRecordTrace:(MNNavigationTraceManager *)arg1;

@end
