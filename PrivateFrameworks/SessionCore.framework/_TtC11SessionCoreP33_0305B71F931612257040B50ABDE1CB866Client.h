
@interface _TtC11SessionCoreP33_0305B71F931612257040B50ABDE1CB866Client : NSObject <ACActivityOutputXPCServer> {
    void _lock_bufferedChanges;
    void _lock_pendingChangeAck;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_subscriptionOptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _target;
    void delegate;
    void hasActivityListenerEntitlement;
    void lock;
    void processIdentifier;
    void processManager;
}

- (void).cxx_destruct;
- (id)activityDescriptorContentStatesWithError:(id*)arg1;
- (id)activityDescriptorForIdentifier:(id)arg1;
- (id)activityDescriptorsWithError:(id*)arg1;
- (id)init;
- (id)subscribeWithOptions:(id)arg1 error:(id*)arg2;
- (void)unsubscribe;

@end
