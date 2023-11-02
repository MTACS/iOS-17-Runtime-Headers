
@interface _INBundleImage : INImage {
    INImageBundle * _imageBundle;
    NSString * _imageName;
}

@property (nonatomic, copy) INImageBundle *imageBundle;
@property (nonatomic, copy) NSString *imageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_bundleIdentifier;
- (id)_bundlePath;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (bool)_isSystem;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_name;
- (bool)_requiresRetrieval;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setBundlePath:(id)arg1;
- (void)_setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageBundle;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (void)setImageBundle:(id)arg1;
- (void)setImageName:(id)arg1;
- (id)stringRepresentation;

@end
