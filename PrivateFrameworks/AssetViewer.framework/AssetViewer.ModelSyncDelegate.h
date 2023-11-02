
@interface AssetViewer.ModelSyncDelegate : NSObject <AVPlaybackCoordinatorPlaybackControlDelegate> {
    void animationController;
}

- (void).cxx_destruct;
- (id)init;
- (void)playbackCoordinator:(id)arg1 didIssueBufferingCommand:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playbackCoordinator:(id)arg1 didIssuePauseCommand:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playbackCoordinator:(id)arg1 didIssuePlayCommand:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playbackCoordinator:(id)arg1 didIssueSeekCommand:(id)arg2 completionHandler:(id /* block */)arg3;

@end
