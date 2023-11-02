
@protocol MCMClientCodeSignInfo <NSObject, NSCopying>

@required

- (bool)cached;
- (id)clientCodeSignInfoByChangingCached:(bool)arg1;
- (<MCMEntitlements> *)entitlements;
- (NSString *)identifier;
- (bool)isPlatformBinary;
- (bool)isSignatureValid;
- (bool)isSigned;

@end
