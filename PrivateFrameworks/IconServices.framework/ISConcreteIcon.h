
@interface ISConcreteIcon : ISCodableIcon <NSSecureCoding> {
    NSUUID * _digest;
    ISImageCache * _imageCache;
}

@property (readonly) NSUUID *digest;
@property (readonly) ISImageCache *imageCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_aspectRatio;
- (id)_cachedImageForDescriptor:(id)arg1;
- (id)_fallbackKey;
- (id)_imageForSymbolImageDescriptor:(id)arg1;
- (id)_imageFromStoreForDescriptor:(id)arg1;
- (void)_prepareImagesForImageDescriptors:(id)arg1;
- (unsigned long long)assessValidationToken:(id)arg1;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (id)generateImageWithDescriptor:(id)arg1;
- (void)generateImageWithDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)imageCache;
- (id)imageForDescriptor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIcon:(id)arg1;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;
- (void)resolve;
- (id)symbol;

@end
