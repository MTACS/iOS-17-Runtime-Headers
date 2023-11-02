
@interface CPImageSet : NSObject <NSSecureCoding> {
    CPImageSetAssetRegistration * _currentAssetRegistration;
    UIImage * _darkContentImage;
    UIImage * _lightContentImage;
}

@property (nonatomic, retain) CPImageSetAssetRegistration *currentAssetRegistration;
@property (nonatomic, retain) UIImage *darkContentImage;
@property (nonatomic, retain) UIImage *lightContentImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentAssetRegistration;
- (id)darkContentImage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 treatmentBlock:(id /* block */)arg2;
- (id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lightContentImage;
- (void)resizeImagesToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentAssetRegistration:(id)arg1;
- (void)setDarkContentImage:(id)arg1;
- (void)setLightContentImage:(id)arg1;
- (void)swapStyles;

@end
