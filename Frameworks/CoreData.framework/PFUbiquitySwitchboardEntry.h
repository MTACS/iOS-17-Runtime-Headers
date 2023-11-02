
@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned long long  _activeStoreCount;
    int  _finishLock;
    bool  _finishedInitializingForStore;
    bool  _finishedSetupForStore;
    PFUbiquitySetupAssistant * _finishingSetupAssistant;
    PFUbiquityFilePresenter * _fp;
    bool  _hasScheduledFinishBlock;
    PFUbiquityFilePresenter * _localFP;
    NSString * _localPeerID;
    PFUbiquityLocation * _localRootLocation;
    PFUbiquitySwitchboardEntryMetadata * _metadata;
    PFUbiquityContainerMonitor * _monitor;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSMutableDictionary * _registeredCoordinators;
    NSString * _storeName;
    NSURL * _storeURL;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)containerIdentifierChanged:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 withURL:(id)arg3 ubiquityRootLocation:(id)arg4 andLocalRootLocation:(id)arg5;

@end
