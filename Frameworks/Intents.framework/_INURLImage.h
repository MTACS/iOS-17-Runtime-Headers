
@interface _INURLImage : INImage {
    NSURL * _imageURL;
    NSData * _sandboxExtensionData;
}

@property (nonatomic, readonly, copy) NSURL *imageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (bool)_isEligibleForProxying;
- (bool)_isSupportedForDonation;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)_requiresRetrieval;
- (id)_sandboxExtensionData;
- (void)_setSandboxExtensionData:(id)arg1;
- (void)_setUri:(id)arg1;
- (id)_uri;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageURL:(id)arg1;

@end
