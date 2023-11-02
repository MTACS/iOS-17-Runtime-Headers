
@interface IMAP2ConnectionControl.Engine : _TtCs12_SwiftObject {
    void activityTimer;
    void betterPathEvaluator;
    void checkForLongSyncsTimer;
    void connections;
    void didStart;
    void didTearDown;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  externalState;
    void inSyncMailboxesDidSyncTimer;
    void isProcessingUpdates;
    void lastLoggedSyncRequestsAt;
    void logName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void pendingUpdates;
    void persistenceEventQueue;
    void sendAction;
    void state;
    void stateCapture;
    void tracingIDOwner;
    void workQueue;
}

@end
