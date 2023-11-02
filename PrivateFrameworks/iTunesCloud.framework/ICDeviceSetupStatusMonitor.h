
@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingBuddyCompleteBlocks;
    NSMutableArray * _pendingSetupCompleteBlocks;
    bool  _setupAssistantComplete;
    int  _setupAssistantFinishedNotifyToken;
    int  _setupAssistantLaunchedNotifyToken;
    bool  _watchInitialSyncIsComplete;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceSetupComplete, nonatomic, readonly) bool deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (getter=isSetupAssistantComplete, nonatomic) bool setupAssistantComplete;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)arg1;
- (void)dealloc;
- (bool)isDeviceSetupComplete;
- (bool)isSetupAssistantComplete;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)performBlockAfterBuddySetup:(id /* block */)arg1;
- (void)performBlockAfterDeviceSetup:(id /* block */)arg1;
- (void)setSetupAssistantComplete:(bool)arg1;

@end
