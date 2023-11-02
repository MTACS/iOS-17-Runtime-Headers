
@interface MediaPlaybackCore.InternalPlayerController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void delegate;
    void hasPrerolled;
    void lastFullyDownloadedPlayerItem;
    void pendingSeek;
    void player;
    void preSetQueueItem;
    void preferredRate;
    void queue;
    void reportedResumePlaybackTime;
    void reporter;
    void scanningSubscription;
    void targetRate;
    void targetStartTime;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)arg1;
- (id)stateDictionary;

@end
