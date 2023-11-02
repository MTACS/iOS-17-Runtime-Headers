
@interface DEPClient : NSObject {
    id /* block */  _callback;
    NSXPCConnection * _connection;
    DEPDeviceUploadSubmitDeviceRequestPayload * _deviceUploadRequest;
    NSString * _nonce;
    DEPDeviceUploadOrganization * _organization;
    DEPDeviceUploadCredentials * _userCredentials;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) DEPDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) DEPDeviceUploadOrganization *organization;
@property (nonatomic, retain) DEPDeviceUploadCredentials *userCredentials;

- (void).cxx_destruct;
- (void)_callServiceByType:(long long)arg1 onProxy:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)_cloudConfigRetrievalBlockWithClientCompletionBlock:(id /* block */)arg1;
- (void)_completeServiceWithSuccess:(bool)arg1 response:(id)arg2 error:(id)arg3;
- (id)_connectionError;
- (id)_organizationFromDict:(id)arg1;
- (id)_organizationsFromArray:(id)arg1;
- (id)_requestTypesFromDict:(id)arg1;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)_soldToIdsFromDict:(id)arg1;
- (id /* block */)callback;
- (id)connection;
- (void)dealloc;
- (id)deviceUploadRequest;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)arg1;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)nonce;
- (id)organization;
- (void)pingWithCompletionBlock:(id /* block */)arg1;
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setCallback:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDeviceUploadRequest:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)unenrollWithCompletionBlock:(id /* block */)arg1;
- (id)userCredentials;

@end
