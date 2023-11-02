
@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding> {
    long long  _imageTypeToStore;
    NSMutableDictionary * _keyImagesByType;
    NSString * _proxyIdentifier;
}

@property (setter=_setImageTypeToStore:, nonatomic) long long _imageTypeToStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INImage *keyImage;
@property (nonatomic, copy) NSDictionary *keyImagesByType;
@property (nonatomic, copy) NSString *proxyIdentifier;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_imageTypeToStore;
- (void)_setImageTypeToStore:(long long)arg1;
- (bool)canStoreImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyImage;
- (id)keyImagesByType;
- (id)proxyIdentifier;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id*)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (void)setKeyImage:(id)arg1;
- (void)setKeyImagesByType:(id)arg1;
- (void)setProxyIdentifier:(id)arg1;
- (id)storeImage:(id)arg1 scaled:(bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 error:(id*)arg5;
- (id)storeImageSynchronously:(id)arg1 error:(id*)arg2;

@end
