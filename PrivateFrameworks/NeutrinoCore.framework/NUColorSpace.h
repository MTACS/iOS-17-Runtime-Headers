
@interface NUColorSpace : NSObject {
    struct CGColorSpace { } * _CGColorSpace;
    NSString * _descriptionName;
}

@property (nonatomic, readonly) struct CGColorSpace { }*CGColorSpace;
@property (nonatomic, readonly) NSDictionary *cvPixelBufferAttachments;
@property (nonatomic, readonly) NSString *descriptionName;
@property (nonatomic, readonly) bool isExtended;
@property (nonatomic, readonly) bool isHDR;
@property (nonatomic, readonly) bool isRGB;
@property (nonatomic, readonly) bool isWideGamut;
@property (nonatomic, readonly) NSString *name;

+ (id)_loadICCProfileDataWithIdentifier:(id)arg1;
+ (id)adobeRGBColorSpace;
+ (id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3;
+ (id)colorSpaceFromVideoColorProperties:(id)arg1;
+ (id)displayP3ColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)itur2100PQColorSpace;
+ (id)linearGrayColorSpace;
+ (id)rec709ColorSpace;
+ (id)sRGBColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)workingColorSpace;

- (void).cxx_destruct;
- (struct CGColorSpace { }*)CGColorSpace;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)cvPixelBufferAttachments;
- (void)dealloc;
- (id)description;
- (id)descriptionName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGColorSpace:(struct CGColorSpace { }*)arg1;
- (id)initWithCGColorSpace:(struct CGColorSpace { }*)arg1 descriptionName:(id)arg2;
- (id)initWithICCProfileData:(id)arg1 descriptionName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExtended;
- (bool)isHDR;
- (bool)isRGB;
- (bool)isWideGamut;
- (id)name;
- (void)nu_updateDigest:(id)arg1;

@end
