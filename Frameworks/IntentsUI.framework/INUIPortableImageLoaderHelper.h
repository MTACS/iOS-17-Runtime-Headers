
@interface INUIPortableImageLoaderHelper : NSObject <INPortableImageLoaderHelping> {
    UITraitCollection * _traitCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadImageDataFromBundle:(id)arg1 withImageName:(id)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (void)loadImageSizeFromData:(id)arg1 completion:(id /* block */)arg2;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end
