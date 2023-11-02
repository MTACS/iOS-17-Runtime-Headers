
@interface KTVerifier : NSObject {
    TransparencyApplication * _application;
    NSString * _applicationIdentifier;
    NSXPCConnection * _connection;
}

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSXPCConnection *connection;

+ (id)getUIStatusPriority:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)application;
- (id)applicationIdentifier;
- (void)batchQuery:(id)arg1 userInitiated:(bool)arg2 block:(id /* block */)arg3;
- (void)clearLogClientConfiguration:(id /* block */)arg1;
- (bool)clearPeerCache:(id)arg1 error:(id*)arg2;
- (void)clearPublicKeyStoreState:(id /* block */)arg1;
- (void)clearState:(id /* block */)arg1;
- (void)configurationBagFetch:(id /* block */)arg1;
- (id)connection;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 accountKey:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 updateCompletionBlock:(id /* block */)arg7;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 accountKey:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(id /* block */)arg6;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(id /* block */)arg6;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(id /* block */)arg5;
- (void)copyApplicationState:(id /* block */)arg1;
- (void)copyApplicationTranscript:(id /* block */)arg1;
- (void)copyDaemonState:(id /* block */)arg1;
- (void)copyDataStoreStatistics:(id /* block */)arg1;
- (void)copyDeviceStatus:(id)arg1 complete:(id /* block */)arg2;
- (void)copyKeyStoreState:(id /* block */)arg1;
- (void)copyKeyStoreStateFromDisk:(id /* block */)arg1;
- (void)copyLogClientConfiguration:(id /* block */)arg1;
- (void)forceApplicationConfig:(id /* block */)arg1;
- (void)forceApplicationKeysFetch:(id /* block */)arg1;
- (void)forceCloudConfigUpdate:(id /* block */)arg1;
- (void)forceConfigUpdate:(id /* block */)arg1;
- (void)forceDutyCycle:(id /* block */)arg1;
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(id /* block */)arg3;
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getCachedValidatePeerResults:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned long long)getDisplayStatusForResults:(id)arg1 isSelfOptedIn:(bool)arg2;
- (void)getValidatePeerResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getValidatePeerResult:(id)arg1 uuid:(id)arg2 fetchNow:(bool)arg3 completionBlock:(id /* block */)arg4;
- (bool)ignoreFailure:(id)arg1 uuid:(id)arg2 error:(id*)arg3;
- (bool)ignoreFailureForResults:(id)arg1 error:(id*)arg2;
- (id)initWithApplication:(id)arg1;
- (void)initiateQueryForUris:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)invokeXPCSynchronousCallWithBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (bool)markFailureSeenForResults:(id)arg1 error:(id*)arg2;
- (void)resetRequestToPending:(id)arg1 block:(id /* block */)arg2;
- (void)setApplication:(id)arg1;
- (id)unimplementedError:(id)arg1;
- (id)urisFromResults:(id)arg1;
- (void)validateEnrollmentResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)validateEnrollmentUri:(id)arg1 accountKey:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id*)arg5;
- (void)validateEnrollmentUri:(id)arg1 accountKey:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (id)validateEnrollmentUri:(id)arg1 accountKey:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id*)arg6;
- (void)validatePeerResult:(id)arg1 uuid:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)validatePeerUri:(id)arg1 accountKey:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6;
- (id)validatePeerUri:(id)arg1 accountKey:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id*)arg5;
- (void)validatePeerUri:(id)arg1 accountKey:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(id /* block */)arg5;
- (void)validatePeers:(id)arg1 fetchNow:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)validateSelfResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(id /* block */)arg4;

@end
