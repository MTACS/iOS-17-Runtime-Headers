
@interface MediaPlaybackCore.AssetSlidingQueueController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void assetLoader;
    void assetQueue;
    void backgroundTaskController;
    void currentQueueControllerItem;
    void deferredPlaybackRateForNextSetQueue;
    void delegate;
    void errorController;
    void externalPlaybackController;
    void hasSetQueueCompletedSuccessfully;
    void inFlightSetQueueContext;
    void lastSetQueueIdentifier;
    void playbackDefaults;
    void playbackStallTimer;
    void playerController;
    void playerItemStateSnapshot;
    void queueController;
    void reloadingWithFadeout;
    void reporter;
    void synchronizingToPlayer;
    void transitionController;
    void unloadingTimer;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (id)stateDictionary;

@end
