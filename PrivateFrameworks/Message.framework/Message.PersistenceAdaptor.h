
@interface Message.PersistenceAdaptor : _TtCs12_SwiftObject {
    void _allLocalMailboxActions;
    void _allLocalMessageActions;
    void _mailboxPathSeparator;
    void _nextActionID;
    void _sendReply;
    void account;
    void cancelationToken;
    void clientStateObserver;
    void currentBackFillSync;
    void didTearDown;
    void downloads;
    void lastKnownEnvironment;
    void lastKnownLocalAction;
    void limitBackgroundSyncTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void mailboxActivities;
    void mailboxPersistenceHelperCache;
    void messagesBeingDownloaded;
    void mimeCache;
    void nameMapping;
    void opaqueIDCoder;
    void pendingMailboxActivities;
    void runningSyncs;
    void searches;
    void stateCapture;
    void statusIsolationQueue;
    void userVisibleMailboxes;
    void workQueue;
    void workQueueKey;
    void workloop;
}

@end
