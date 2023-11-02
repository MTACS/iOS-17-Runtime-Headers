
@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam {
    PKRemotePaymentRequest * _remotePaymentRequest;
}

@property (nonatomic, retain) PKRemotePaymentRequest *remotePaymentRequest;

+ (id)paramWithRemotePaymentRequest:(id)arg1;

- (void).cxx_destruct;
- (id)remotePaymentRequest;
- (void)setRemotePaymentRequest:(id)arg1;

@end
