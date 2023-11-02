
@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    struct AVContentKeySessionDelegateClient { int (**x1)(); } * _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 contentProtectionSessionIdentifierDidChangeForKeyGroup:(id)arg2;
- (void)contentKeySession:(id)arg1 contentProtectionSessionIdentifierDidChangeForReportGroup:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequests:(id)arg2 forInitializationData:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(id)arg1 externalProtectionStatusDidChangeForContentKeyRequest:(id)arg2;
- (bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (id)initWithParent:(struct AVContentKeySessionDelegateClient { int (**x1)(); }*)arg1;
- (void)invalidate;

@end
