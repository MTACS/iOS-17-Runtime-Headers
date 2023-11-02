
@interface SeymourMedia.StreamingKeyProvisioner : NSObject <AVContentKeySessionDelegate> {
    void analyticsReporter;
    void asset;
    void assetClient;
    void backoffIntervalProvider;
    void certificate;
    void contentKeySession;
    void keyDeliveryClient;
    void onUnrecoverableError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void workoutIdentifier;
}

- (void).cxx_destruct;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)dealloc;
- (id)init;

@end
