
@interface IMAP2ConnectionControl.ConnectionPool : _TtCs12_SwiftObject {
    void backoff;
    void backoffLoggingRateLimit;
    void backoffTimer;
    void checkForStallTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void connectionStateDidChange;
    void connections;
    void didTearDown;
    void engine;
    void engineID;
    void enqueuedEvents;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void nextConnectionID;
    void queue;
    void stateCapture;
}

@end
