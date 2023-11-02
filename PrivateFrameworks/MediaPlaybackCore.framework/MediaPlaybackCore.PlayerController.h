
@interface MediaPlaybackCore.PlayerController : _TtCs12_SwiftObject <MFPlayerConfigurable, MFResettable, MFStateDumpable> {
    void audioSession;
    void coordinatedPlaybackSuspension;
    void currentActivationToken;
    void currentItemTransition;
    void delegate;
    void didBecomeActiveSubscription;
    void fsm;
    void isAirPlayRoute;
    void lastAudioSessionMode;
    void leaseController;
    void mode;
    void playbackCoordinatorObservation;
    void playbackStartSubscription;
    void player;
    void playerID;
    void playerObserver;
    void playerSubscription;
    void previousItemID;
    void queue;
    void reporter;
    void systemObserver;
    void systemSubscription;
    void userActionTimeout;
    void userEventsMonitor;
    void videoPlayerBehavior;
    void videoPlayerViewController;
    void willResignActiveSubscription;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (void)setRelativeVolume:(float)arg1;
- (void)setSpatializationFormat:(long long)arg1;
- (id)stateDictionary;

@end
