
@interface HKSharingRecipientAuthorizationStore : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    HKSharingRecipientIdentifier * _recipientIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly, copy) HKSharingRecipientIdentifier *recipientIdentifier;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_registerRemoteObservers;
- (void)addObserver:(id)arg1;
- (void)addSharingAuthorizations:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_didAddSharingAuthorizations:(id)arg1;
- (void)clientRemote_didRemoveSharingAuthorizations:(id)arg1;
- (void)clientRemote_wasRevoked;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id /* block */)arg1;
- (void)fetchSharingAuthorizationsWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 recipientIdentifier:(id)arg2;
- (id)observers;
- (id)proxyProvider;
- (id)recipientIdentifier;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (void)removeSharingAuthorizations:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeWithCompletion:(id /* block */)arg1;

@end
