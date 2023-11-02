
@interface UserNotificationsCore.SyncService : NSObject {
    void delegate;
    void flushInterval;
    void inboundMessaging;
    void outboundMessaging;
    void queue;
    void queue_flushTimer;
    void queue_pendingDismissalIDs;
    void queue_pendingDismissalPayloads;
    void queue_pendingFeeds;
    void queue_pendingSectionID;
    void queue_pendingUniversalSectionID;
    void service;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
