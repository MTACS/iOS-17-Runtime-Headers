
@protocol AVContentKeySessionDelegate <NSObject>

@required

- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional

- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequest:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequestDidSucceed:(AVContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideRenewingContentKeyRequest:(AVContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didUpdatePersistableContentKey:(NSData *)arg2 forContentKeyIdentifier:(id)arg3;
- (bool)contentKeySession:(AVContentKeySession *)arg1 shouldRetryContentKeyRequest:(AVContentKeyRequest *)arg2 reason:(NSString *)arg3;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySessionDidGenerateExpiredSessionReport:(AVContentKeySession *)arg1;

@end
