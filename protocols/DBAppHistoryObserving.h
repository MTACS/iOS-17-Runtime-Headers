
@protocol DBAppHistoryObserving <NSObject>

@optional

- (void)appHistory:(DBAppHistory *)arg1 mostRecentAudioAppUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentHomeScreenUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentNavigationAppUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentOtherAppUpdatedTo:(NSString *)arg2;

@end
