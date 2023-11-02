
@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource> {
    NSMutableDictionary * _networks;
    PKPassLibrary * _passLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _relevantPassIdentifiers;
    id /* block */  changeHandler;
    id /* block */  relevancyHandler;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *networks;
@property (nonatomic, retain) PKPassLibrary *passLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ relevancyHandler;
@property (nonatomic, retain) NSMutableSet *relevantPassIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPass:(id)arg1;
- (id)_createWiFiWalletPassFromPass:(id)arg1;
- (void)_handlePassLibraryChange:(id)arg1;
- (void)_handleRelevantPassUpdate:(id)arg1;
- (void)_initializeWiFiPasses;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)arg1 notRelevantNetworks:(id)arg2;
- (id)_networksWithIdentifier:(id)arg1;
- (void)_passDidBecomeRelevant:(id)arg1;
- (void)_passLibraryDidBecomeRelevantNotification:(id)arg1;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_removeRelevantPasses;
- (id)candidateNetworks;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)expiredWalletIDs;
- (id)init;
- (id)initWithChangeHandler:(id /* block */)arg1;
- (id)networks;
- (id)passLibrary;
- (id)queue;
- (id /* block */)relevancyHandler;
- (id)relevantNetworks;
- (id)relevantPassIdentifiers;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setNetworks:(id)arg1;
- (void)setPassLibrary:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRelevancyHandler:(id /* block */)arg1;
- (void)setRelevantPassIdentifiers:(id)arg1;

@end
