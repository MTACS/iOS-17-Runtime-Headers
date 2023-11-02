
@interface DTStoreKitService : DTXService <ASDOctaneClientProtocol> {
    NSXPCConnection * _connectionToDaemon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_commandRequiresBundleID:(unsigned long long)arg1;
+ (id)_dataUsingCompatibilityTimeRateFrom:(id)arg1 currentVersion:(int)arg2;
+ (void)_sendMessage:(id)arg1 onConnection:(id)arg2 completion:(id /* block */)arg3;
+ (void)registerCapabilities:(id)arg1;
+ (void)removeConfigurationDataForBundleID:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
+ (void)syncConfigurationData:(id)arg1 forBundleID:(id)arg2 connection:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_descriptionForServiceCommand:(unsigned long long)arg1;
- (void)_disconnectServiceConnection;
- (bool)_handleBuyProductMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleChangeAutoRenewStatusMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleCompleteAskToBuyTransactionMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleDeleteAllTransactionsMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleDiscoverAppsMessage:(id)arg1 error:(id*)arg2;
- (bool)_handleFetchTransactionsMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleGetConfigurationMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleObserveTransactionsMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleRemoveConfigurationMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleSyncConfigurationMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_handleUpdateTransactionMessage:(id)arg1 forBundleID:(id)arg2 error:(id*)arg3;
- (bool)_processMessage:(id)arg1 error:(id*)arg2;
- (void)_sendGenericSuccessResponseForMessage:(id)arg1;
- (id)_synchronousRemoteObjectProxy:(id*)arg1;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)receiveEventOfType:(long long)arg1 eventData:(id)arg2 identifier:(id)arg3;
- (void)transactionDeleted:(unsigned long long)arg1 forBundleID:(id)arg2;
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;

@end
