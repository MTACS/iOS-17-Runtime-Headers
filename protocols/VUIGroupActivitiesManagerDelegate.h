
@protocol VUIGroupActivitiesManagerDelegate <NSObject>

@required

- (void)endSessionWithReason:(unsigned long long)arg1;
- (bool)handleCommerceSharedWatchUrl:(NSURL *)arg1;
- (void)handleSharedPlayable:(void *)arg1 watchTogetherUrl:(void *)arg2 startupAction:(void *)arg3 previewMetadata:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: VUIVideosPlayable *, NSURL *, long long, VUIGroupWatchActivityPreviewMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (bool)isEligibleForSession;
- (bool)isSessionActive;
- (bool)isSharedWatchIdValidForCurrentSession:(NSString *)arg1;
- (NSItemProvider *)itemProviderForActivityWithAdamId:(NSString *)arg1 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)arg2 existingItemProvider:(NSItemProvider *)arg3;
- (NSItemProvider *)itemProviderForActivityWithSharedWatchId:(NSString *)arg1 sharedWatchUrl:(NSURL *)arg2 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)arg3 existingItemProvider:(NSItemProvider *)arg4;
- (void)leaveSession;
- (void)playerDidStart:(TVPPlayer *)arg1;
- (void)requestForegroundPresentation;
- (void)requestPermissionToStartCowatchingForPlayable:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: VUIVideosPlayable *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)startPlaybackFailed;

@end
