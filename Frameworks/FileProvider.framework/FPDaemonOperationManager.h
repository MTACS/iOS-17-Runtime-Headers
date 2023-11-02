
@interface FPDaemonOperationManager : NSObject {
    NSMutableSet * _localOperationIDs;
    int  _notifToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_enumerateNewDaemonOperationsWithHandler:(id /* block */)arg1;
- (void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2;
- (void)_updateDaemonOperations;
- (void)dealloc;
- (id)generateLocalOperationID;
- (id)init;
- (void)wakeUp;

@end
