
@interface CLKFullColorImageProvider : NSObject <NSCopying, NSSecureCoding> {
    Class  _ImageViewClass;
    NSString * _accessibilityLabel;
    bool  _applyScalingAndCircularMasking;
    bool  _finalized;
    UIImage * _image;
    NSDictionary * _metadata;
    long long  _monochromeFilterType;
    bool  _prefersFilterOverTransition;
    UIColor * _tintColor;
    CLKImageProvider * _tintedImageProvider;
    bool  _tritium_inactiveFullColorImageProvider;
}

@property (nonatomic, readonly) Class ImageViewClass;
@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic) long long monochromeFilterType;
@property (nonatomic) bool prefersFilterOverTransition;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) CLKImageProvider *tintedImageProvider;
@property (getter=tritium_isTritiumInactiveFullColorImageProvider, nonatomic, readonly) bool tritium_inactiveFullColorImageProvider;

+ (id)fullColorImageProviderWithImageViewClass:(Class)arg1;
+ (id)fullColorImageProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (id)new;
+ (id)providerWithFullColorImage:(id)arg1;
+ (id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(bool)arg2;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(bool)arg3;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)ImageViewClass;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x1; double x2; })arg1 maxDeviceSize:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (id)accessibilityLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x1; double x2; })arg1 maxDeviceSize:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullColorImage:(id)arg1;
- (id)initWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(bool)arg2;
- (id)initWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2;
- (id)initWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(bool)arg3;
- (id)initWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2;
- (id)initWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(bool)arg3;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (long long)monochromeFilterType;
- (bool)prefersFilterOverTransition;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMonochromeFilterType:(long long)arg1;
- (void)setPrefersFilterOverTransition:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintedImageProvider:(id)arg1;
- (id)tintColor;
- (id)tintedImageProvider;
- (bool)tritium_isTritiumInactiveFullColorImageProvider;
- (bool)validate;

@end
