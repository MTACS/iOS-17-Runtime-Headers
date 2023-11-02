
@interface INRemoteImageProxy : INImage {
    NSString * _proxyIdentifier;
    NSString * _storageServiceIdentifier;
}

@property (setter=_setProxyIdentifier:, nonatomic, copy) NSString *_proxyIdentifier;
@property (setter=_setStorageServiceIdentifier:, nonatomic, copy) NSString *_storageServiceIdentifier;
@property (nonatomic, readonly) bool isValid;

+ (id)proxyImageSynchronously:(id)arg1 usingService:(id)arg2 error:(id*)arg3;
+ (void)requestProxyByStoringImage:(id)arg1 qualityOfService:(unsigned int)arg2 scaled:(bool)arg3 storeType:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (id)requestProxyByStoringImage:(id)arg1 qualityOfService:(unsigned int)arg2 scaled:(bool)arg3 storeType:(unsigned long long)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_proxyIdentifier;
- (void)_retrieveImageDataWithReply:(id /* block */)arg1;
- (void)_setProxyIdentifier:(id)arg1;
- (void)_setStorageServiceIdentifier:(id)arg1;
- (id)_storageServiceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)purgeStoredImageWithCompletion:(id /* block */)arg1;
- (id)retrieveProxiedImageSynchronouslyUsingService:(id)arg1 error:(id*)arg2;
- (void)unproxyImageFromService:(id)arg1 reply:(id /* block */)arg2;

@end
