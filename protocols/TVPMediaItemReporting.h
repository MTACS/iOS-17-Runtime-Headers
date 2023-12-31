
@protocol TVPMediaItemReporting <NSObject>

@required

- (<TVPMediaItemReportingDelegate> *)reportingDelegate;

@optional

- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(bool)arg4;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;

@end
