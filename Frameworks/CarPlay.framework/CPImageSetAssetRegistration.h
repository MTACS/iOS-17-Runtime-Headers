
@interface CPImageSetAssetRegistration : NSObject {
    UITraitCollection * _baseTraitCollection;
    UIImage * _combinedImage;
    UITraitCollection * _darkTraitCollection;
    UITraitCollection * _lightTraitCollection;
}

@property (nonatomic, readonly) UITraitCollection *baseTraitCollection;
@property (nonatomic, readonly) UIImage *combinedImage;
@property (nonatomic, readonly) UITraitCollection *darkTraitCollection;
@property (nonatomic, readonly) UITraitCollection *lightTraitCollection;

- (void).cxx_destruct;
- (id)baseTraitCollection;
- (id)combinedImage;
- (id)darkTraitCollection;
- (void)dealloc;
- (id)initWithLightImage:(id)arg1 darkImage:(id)arg2 baseTraitCollection:(id)arg3;
- (id)lightTraitCollection;

@end
