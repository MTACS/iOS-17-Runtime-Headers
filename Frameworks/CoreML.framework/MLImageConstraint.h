
@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    unsigned long long  _pixelType;
    long long  _pixelsHigh;
    long long  _pixelsWide;
    MLImageSizeConstraint * _sizeConstraint;
}

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned int osType;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (readonly) unsigned long long pixelType;
@property (nonatomic, readonly) long long pixelsHigh;
@property (nonatomic, readonly) long long pixelsWide;
@property (nonatomic, readonly) MLImageSizeConstraint *sizeConstraint;

+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)arg1;
+ (id)stringForImagePixelType:(unsigned long long)arg1;
+ (id)stringForPixelFormatType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForAllowedOSTypes;
- (bool)allowsPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)imageHeight;
- (unsigned long long)imageWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (unsigned int)osType;
- (unsigned int)pixelFormatType;
- (unsigned long long)pixelType;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (id)sizeConstraint;

@end
