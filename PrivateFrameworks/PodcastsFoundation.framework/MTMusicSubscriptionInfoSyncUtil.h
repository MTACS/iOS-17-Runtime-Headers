
@interface MTMusicSubscriptionInfoSyncUtil : NSObject {
    void accountStore;
    void appleMusicSegmentKey;
    void appleMusicSegmentValue;
    void bag;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastMusicSyncDate;
    void syncSession;
    void workQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBag:(id)arg1 accountStore:(id)arg2;

@end
