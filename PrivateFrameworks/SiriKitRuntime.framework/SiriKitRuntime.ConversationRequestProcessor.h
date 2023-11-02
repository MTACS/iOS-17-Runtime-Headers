
@interface SiriKitRuntime.ConversationRequestProcessor : SiriKitRuntime.ConversationRequestProcessorBase {
    void asyncWork;
    void contextDonator;
    void contextUpdater;
    void coreTelephonyServiceProvider;
    void correctionsPlatformClient;
    void decisionMaker;
    void executionBridgeProcessorDelegate;
    void executionClient;
    void executionOutputSubmitter;
    void instrumentationUtil;
    void isFirstRequestInSession;
    void isMUXEnabled;
    void muxContextMessage;
    void networkAvailabilityProvider;
    void preExecutionActionHandler;
    void recentDialogTracker;
    void requestDispatcherServiceHelper;
    void rrClient;
    void rraasCollectionTask;
    void sentResultCandidateSelected;
    void sessionState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionUserId;
    void state;
}

@end
