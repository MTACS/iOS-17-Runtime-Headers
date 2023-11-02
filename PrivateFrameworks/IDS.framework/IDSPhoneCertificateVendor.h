
@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer * _daemonRequestTimer;
    NSObject<OS_dispatch_queue> * _queue;
    IDSPhoneCertificateVendor * _strongSelfReference;
}

@property (nonatomic, readonly) IDSDaemonRequestTimer *daemonRequestTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSPhoneCertificateVendor *strongSelfReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2;
- (id)_debugDescriptionForErrorCode:(long long)arg1;
- (bool)_isPhoneCertificateVendorSupported;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id /* block */)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id /* block */)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id /* block */)arg1;
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id /* block */)arg1;
- (long long)_subscriptionSourceForContext:(id)arg1;
- (long long)_subscriptionSourceFromIntegerValue:(long long)arg1;
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;
- (void)authenticatePhoneWithCompletion:(id /* block */)arg1;
- (long long)currentPhoneUserSubscriptionSourceWithError:(id*)arg1;
- (id)daemonRequestTimer;
- (void)dealloc;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7;
- (void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)requestCarrierTokenWithMessageBody:(id)arg1 completion:(id /* block */)arg2;
- (void)requestCarrierTokenWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id /* block */)arg1;
- (void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)setStrongSelfReference:(id)arg1;
- (id)strongSelfReference;

@end
