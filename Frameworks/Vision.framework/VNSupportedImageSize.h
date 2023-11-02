
@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _aspectRatioHandling;
    unsigned long long  _cachedCalculatedHash;
    unsigned int  _idealImageFormat;
    unsigned int  _idealOrientation;
    bool  _orientationAgnostic;
    VNSizeRange * _pixelsHighRange;
    VNSizeRange * _pixelsWideRange;
}

@property (nonatomic, readonly) unsigned long long aspectRatioHandling;
@property (nonatomic, readonly) unsigned int idealImageFormat;
@property (nonatomic, readonly) unsigned int idealOrientation;
@property (getter=isOrientationAgnostic, nonatomic, readonly) bool orientationAgnostic;
@property (nonatomic, readonly) VNSizeRange *pixelsHighRange;
@property (nonatomic, readonly) VNSizeRange *pixelsWideRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)aspectRatioHandling;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)idealImageFormat;
- (unsigned int)idealOrientation;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(bool)arg6;
- (id)initWithIdealFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 orientation:(unsigned int)arg4 aspectRatioHandling:(unsigned long long)arg5 orientationAgnostic:(bool)arg6;
- (bool)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOrientationAgnostic;
- (id)pixelsHighRange;
- (id)pixelsWideRange;

@end
