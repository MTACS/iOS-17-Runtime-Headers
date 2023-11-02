
@interface IMAP2Connection.CommandConnection : _TtCs12_SwiftObject {
    void commandCounter;
    void connection;
    void delegate;
    void engineID;
    void enqueuedEvents;
    void finishPushRegistration;
    void getPushInformation;
    void id;
    void idleKind;
    void idleRefreshInterval;
    void idleTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void makeCredentials;
    void pathAttributes;
    void queue;
    void recentErrors;
    void runningCommands;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
}

@end
