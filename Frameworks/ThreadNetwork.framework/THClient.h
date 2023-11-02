
@interface THClient : NSObject {
    bool  _isConnected;
    struct dispatch_queue_s { } * _threadSafePropertyQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) struct dispatch_queue_s { }*threadSafePropertyQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)checkPreferredNetworkForActiveOperationalDataset:(id)arg1 completion:(id /* block */)arg2;
- (id)clientProxyWithErrorHandler:(id /* block */)arg1;
- (id)clientProxyWithErrorHandler:(id /* block */)arg1 pingService:(bool)arg2;
- (void)connectToXPCService;
- (void)ctcsAddPreferredNetworkWithCompletionInternally:(id)arg1 extendedPANId:(id)arg2 borderAgentID:(id)arg3 ipV4NwSignature:(id)arg4 ipv6NwSignature:(id)arg5 wifiSSID:(id)arg6 wifiPassword:(id)arg7 completion:(id /* block */)arg8;
- (void)ctcsCleanKeychainThreadNetworksWithCompletion:(id /* block */)arg1;
- (void)ctcsCleanPreferredAndFrozenThreadNetworksWithCompletion:(id /* block */)arg1;
- (void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)ctcsDeletePreferredNetworkWithCompletion:(id /* block */)arg1;
- (void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)ctcsRetrieveOrGeneratePreferredNetworkInternallyWithCompletion:(id /* block */)arg1;
- (void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id /* block */)arg1;
- (void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)arg1 network:(id)arg2 credentialsDataSet:(id)arg3 waitForSync:(bool)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void)deleteCredentialsForBorderAgent:(id)arg1 completion:(id /* block */)arg2;
- (bool)getConnectionEntitlementValidity;
- (bool)getConnectionEntitlementValidity:(id)arg1;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (id)init;
- (bool)initCommon;
- (bool)initCommon:(id)arg1;
- (id)initWithKeychainAccessGroup:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (void)isPreferredNetworkAvailableWithCompletion:(id /* block */)arg1;
- (id)performXPCRequestBlock:(id /* block */)arg1 timeout:(double)arg2 error:(id*)arg3;
- (void)pingXPCService;
- (void)pingXPCServiceWithClientProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveActiveDataSetRecordInternallyForExtendedPANID:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveAllActiveCredentials:(id /* block */)arg1;
- (void)retrieveAllCredentials:(id /* block */)arg1;
- (void)retrieveCredentialsForBorderAgent:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveCredentialsForExtendedPANID:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveCredentialsForUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveOrGeneratePreferredNetworkInternally:(id /* block */)arg1;
- (void)retrievePreferredCredentials:(id /* block */)arg1;
- (void)retrievePreferredCredentialsInternally:(id /* block */)arg1;
- (void)retrievePreferredNetworkInternallyOnMdnsAndSig:(id /* block */)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setThreadSafePropertyQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)storeCredentialsForBorderAgent:(id)arg1 activeOperationalDataSet:(id)arg2 completion:(id /* block */)arg3;
- (void)storeCredentialsForBorderAgentInternally:(id)arg1 networkName:(id)arg2 extendedPANId:(id)arg3 activeOperationalDataSet:(id)arg4 completion:(id /* block */)arg5;
- (id)synchronousClientProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxy;
- (struct dispatch_queue_s { }*)threadSafePropertyQueue;
- (void)updatePreferredCredentialsInternally:(id /* block */)arg1;
- (id)xpcConnection;

@end
