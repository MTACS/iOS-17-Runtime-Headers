
@interface SessionCore.PresentationObservationServiceClient : NSObject <ACActivityPresentationObservationXPCServer> {
    void _lock_bufferedPresentationUpdate;
    void _lock_pendingAck;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_predicate;
    void connection;
    void delegate;
    void lock;
}

- (void).cxx_destruct;
- (id)init;
- (bool)subscribeToActivityPresentationMatchingPredicate:(id)arg1 error:(id*)arg2;

@end
