
@interface RequestDispatcherBridges.CDMProxy : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeSessionId;
    void assetsChanged;
    void cdmActiveServiceGraph;
    void cdmClient;
    void cdmClientNotification;
    void cdmDaemonKilled;
    void cdmObserverDaemonKilled;
    void cdmObserverErrorFromSetup;
    void cdmObserverSuccessFromSetup;
    void cdmProxyExpirationInSeconds;
    void cdmSetupRetried;
    void cdmSetupSucceeded;
    void cdmSetupTimeout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cdmSetupTimeoutMillis;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentNLSetupId;
    void instrumentationUtil;
    void isDecoupleFromSession;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastAccessTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastSetupTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  locale;
    void nluRequestIdToStartRequestId;
    void queue;
    void setupSemaphore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  setupTimeSignpostId;
    void shouldAssetsTimeout;
    void startRequestIdToProcessor;
}

@end
