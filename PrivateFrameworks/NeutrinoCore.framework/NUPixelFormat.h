
@interface NUPixelFormat : NSObject {
    int  _CIFormat;
    unsigned int  _CVPixelFormat;
    long long  _bitsPerComponent;
    long long  _bytesPerChroma;
    long long  _bytesPerLuma;
    long long  _bytesPerPixel;
    struct { 
        long long width; 
        long long height; 
    }  _chromaSubsampling;
    bool  _isYCC;
    unsigned long long  _metalFormat;
    NSString * _name;
    bool  _supportsExtendedRange;
}

@property (nonatomic, readonly) int CIFormat;
@property (nonatomic, readonly) unsigned int CVPixelFormat;
@property (nonatomic, readonly) long long bitsPerComponent;
@property (nonatomic, readonly) long long bytesPerChroma;
@property (nonatomic, readonly) long long bytesPerLuma;
@property (nonatomic, readonly) long long bytesPerPixel;
@property (nonatomic, readonly) struct { long long x1; long long x2; } chromaSubsampling;
@property (nonatomic, readonly) bool isYCC;
@property (nonatomic, readonly) unsigned long long metalFormat;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool supportsExtendedRange;

+ (id)A2RGB10;
+ (id)ARGB8;
+ (id)BGRA8;
+ (id)R16;
+ (id)R8;
+ (id)RG16;
+ (id)RGBA16;
+ (id)RGBA8;
+ (id)RGBAf;
+ (id)RGBAh;
+ (id)X2RGB10;
+ (id)YCC10f420;
+ (id)YCC10f420p;
+ (id)pixelFormatForCIFormat:(int)arg1;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)arg1;
+ (id)sRGB10XR;
+ (id)sRGBA8;

- (void).cxx_destruct;
- (int)CIFormat;
- (unsigned int)CVPixelFormat;
- (long long)alignedRowBytesForWidth:(long long)arg1;
- (long long)bitsPerComponent;
- (long long)bytesPerChroma;
- (long long)bytesPerLuma;
- (long long)bytesPerPixel;
- (struct { long long x1; long long x2; })chromaSubsampling;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPixelFormat:(id)arg1;
- (bool)isYCC;
- (unsigned long long)metalFormat;
- (id)name;
- (bool)supportsExtendedRange;

@end
