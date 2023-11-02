
@interface INDaemonConnection : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (bool)clearAllRegistrationDigestsWithError:(id*)arg1;
- (void)commonHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)diagnosticReport;
- (void)displayDelayedOfferWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)notifyDeviceStorageLevel:(long long)arg1 completion:(id /* block */)arg2;
- (void)presentHiddenFreshmintWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3;
- (void)remoteFreshmintFlowCompletedWithSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)arg1;
- (void)teardownOffersForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unregisterAccount:(id)arg1 fromiCloudNotificationsWithCompletion:(id /* block */)arg2;
- (bool)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(id /* block */)arg5;

@end
