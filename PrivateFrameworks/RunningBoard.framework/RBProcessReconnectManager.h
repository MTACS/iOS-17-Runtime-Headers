
@interface RBProcessReconnectManager : NSObject {
    NSMutableSet * _currentAssertionIdentifiers;
    <RBDaemonContextProviding> * _daemonContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBProcess * _originatorProcess;
    NSMutableSet * _pendingProcesses;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)didInvalidateAssertion:(id)arg1;
- (id)init;
- (id)initWithDaemonContext:(id)arg1 originatorProcess:(id)arg2;
- (void)reconnectProcesses:(id)arg1;

@end
