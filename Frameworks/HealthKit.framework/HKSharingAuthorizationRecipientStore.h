
@interface HKSharingAuthorizationRecipientStore : NSObject <_HKXPCExportable> {
    NSArray * _authorizationIdentifiers;
    HKHealthStore * _healthStore;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    NSArray * _sharingAuthorizations;
}

@property (nonatomic, readonly, copy) NSArray *authorizationIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly, copy) NSArray *sharingAuthorizations;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_registerRemoteObservers;
- (void)addObserver:(id)arg1;
- (id)authorizationIdentifiers;
- (void)clientRemote_didAddRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2;
- (void)clientRemote_didRemoveRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2;
- (void)clientRemote_didRevokeRecipientIdentifier:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchRecipientIdentifiersByAuthorizationWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 sharingAuthorizations:(id)arg2;
- (id)observers;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (id)sharingAuthorizations;

@end
