
@interface CRKConcreteIDSLocalPrimitives : NSObject <CRKConcreteIDSMessageDidReceiveSubscriptionDelegate, CRKConcreteIDSMessageDidSendSubscriptionDelegate, CRKIDSLocalPrimitives, IDSAccountControllerDelegate, IDSServiceDelegate> {
    IDSAccountController * _accountController;
    CRKArrayDifferenceEngine * _accountsDifferenceEngine;
    NSMutableArray * _backingAccounts;
    NSHashTable * _didReceiveSubscriptions;
    NSHashTable * _didSendSubscriptions;
    IDSService * _service;
    NSString * _serviceName;
}

@property (nonatomic, readonly) IDSAccountController *accountController;
@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic, readonly) CRKArrayDifferenceEngine *accountsDifferenceEngine;
@property (nonatomic, readonly) NSMutableArray *backingAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSHashTable *didReceiveSubscriptions;
@property (nonatomic, readonly) NSHashTable *didSendSubscriptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)makeAccountsDifferenceEngineForPrimitives:(id)arg1;

- (void).cxx_destruct;
- (id)accountController;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (id)accounts;
- (id)accountsDifferenceEngine;
- (id)backingAccounts;
- (id)debugInfo;
- (void)didReceiveSubscriptionDidCancel:(id)arg1;
- (void)didReceiveSubscriptionDidResume:(id)arg1;
- (id)didReceiveSubscriptions;
- (void)didSendSubscriptionDidCancel:(id)arg1;
- (void)didSendSubscriptionDidResume:(id)arg1;
- (id)didSendSubscriptions;
- (id)errorForIDSIDStatus:(long long)arg1;
- (id)errorsByAddressForQueryRefreshResult:(id)arg1;
- (void)fetchFirewallWithCompletion:(id /* block */)arg1;
- (void)forceRefreshIDStatusForDestinations:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithServiceName:(id)arg1;
- (void)insertAccounts:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAccountsAtIndex:(unsigned long long)arg2;
- (bool)isRemoteUserNotRegisteredError:(id)arg1;
- (id)makeRemoteUserNotRegisteredError;
- (void)publishAccountChanges;
- (void)removeAccountsAtIndexes:(id)arg1;
- (void)removeObjectFromAccountsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInAccountsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (bool)sendMessage:(id)arg1 toAddress:(id)arg2 fromID:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)serviceName;
- (id)subscribeToMessageReceivesWithHandler:(id /* block */)arg1;
- (id)subscribeToMessageSendsWithHandler:(id /* block */)arg1;

@end
