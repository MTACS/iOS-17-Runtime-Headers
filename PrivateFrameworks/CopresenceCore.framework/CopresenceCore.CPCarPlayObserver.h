
@interface CopresenceCore.CPCarPlayObserver : NSObject <CARSessionObserving> {
    void delegate;
    void isAttemptingCarplaySession;
    void queue;
    void sessionStatus;
}

- (void).cxx_destruct;
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;

@end
