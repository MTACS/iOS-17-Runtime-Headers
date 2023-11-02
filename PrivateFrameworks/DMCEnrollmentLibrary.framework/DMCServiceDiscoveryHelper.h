
@interface DMCServiceDiscoveryHelper : NSObject

- (void)_checkForESSOWithMethod:(unsigned long long)arg1 authParams:(id)arg2 httpResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_defaultServiceDiscoveryQueryItemsWithUserIdentifier:(id)arg1;
- (void)_discoverAppleServerWithUserIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_discoverServerURLForDomain:(id)arg1 port:(id)arg2 userIdentifier:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_fallbackServer;
- (void)_fetchESSODictionaryFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serverForAppleMAID;
- (void)_serversFromWellKnownURL:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)determineEnrollmentMethodWithServiceURL:(id)arg1 enrollmentType:(unsigned long long)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)discoverEnrollmentMethodWithServiceURL:(id)arg1 enrollmentType:(unsigned long long)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)discoverServerForUserIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchEnrollmentProfileWithServiceURL:(id)arg1 authToken:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchEnrollmentProfileWithServiceURL:(id)arg1 authTokens:(id)arg2 enrollmentMethod:(unsigned long long)arg3 machineInfo:(id)arg4 anchorCertificateRefs:(id)arg5 completionHandler:(id /* block */)arg6;

@end
