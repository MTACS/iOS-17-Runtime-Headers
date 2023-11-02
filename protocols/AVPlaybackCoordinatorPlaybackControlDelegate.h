
@protocol AVPlaybackCoordinatorPlaybackControlDelegate <NSObject>

@required

- (void)playbackCoordinator:(void *)arg1 didIssueBufferingCommand:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVDelegatingPlaybackCoordinator *, AVDelegatingPlaybackCoordinatorBufferingCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)playbackCoordinator:(void *)arg1 didIssuePauseCommand:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVDelegatingPlaybackCoordinator *, AVDelegatingPlaybackCoordinatorPauseCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)playbackCoordinator:(void *)arg1 didIssuePlayCommand:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVDelegatingPlaybackCoordinator *, AVDelegatingPlaybackCoordinatorPlayCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)playbackCoordinator:(void *)arg1 didIssueSeekCommand:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVDelegatingPlaybackCoordinator *, AVDelegatingPlaybackCoordinatorSeekCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
