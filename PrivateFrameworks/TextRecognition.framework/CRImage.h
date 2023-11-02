
@interface CRImage : NSObject {
    struct CGImage { } * _cgImage;
    CIImage * _ciImage;
    int  _colorSpace;
    bool  _isFullRange;
    struct __CVBuffer { } * _pixelBuffer;
    NSNumber * _sceneStabilityMetric;
    NSURL * _url;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _vImage;
    bool  _vImageDataIsCopy;
}

@property (nonatomic) struct CGImage { }*cgImage;
@property (nonatomic, retain) CIImage *ciImage;
@property (readonly) int colorSpace;
@property (readonly) bool hasBackingPixelBuffer;
@property (readonly) unsigned long long height;
@property (readonly) bool isFullRange;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, retain) NSNumber *sceneStabilityMetric;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (retain) NSURL *url;
@property (readonly) struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } vImage;
@property (nonatomic) bool vImageDataIsCopy;
@property (readonly) unsigned long long width;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })allocateVImageBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerPixel:(int)arg3;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })allocateVImageBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 colorSpace:(int)arg3;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })applyEXIFTransformsOnImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 inColorSpace:(int)arg2 properties:(id)arg3;
+ (unsigned long long)bytesPerPixelForColorSpace:(int)arg1;
+ (void)cgOrientation:(unsigned int)arg1 toVImageRotationMode:(char *)arg2 andReflection:(int*)arg3;
+ (unsigned long long)channelsForColorSpace:(int)arg1;
+ (bool)convertVImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 inColorSpace:(int)arg2 toVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 toColorSpace:(int)arg4;
+ (void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2;
+ (id)nameForColorSpace:(int)arg1;

- (void).cxx_destruct;
- (unsigned long long)bufferHash;
- (unsigned long long)bytesPerPixel;
- (struct CGImage { }*)cgImage;
- (id)ciImage;
- (int)colorSpace;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })createFloatBuffer;
- (void)dealloc;
- (id)description;
- (bool)hasBackingPixelBuffer;
- (unsigned long long)height;
- (id)imageByAdjustingBrightnessAlpha:(double)arg1 beta:(double)arg2;
- (id)imageByApplyingBinaryMask:(id)arg1;
- (id)imageByApplyingHistogramCorrection;
- (id)imageByConvertingToColorSpace:(int)arg1;
- (id)imageByConvertingToColorSpace:(int)arg1 forceDataCopy:(bool)arg2;
- (id)imageByCorrectingFromOrientation:(unsigned int)arg1;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textFeaturePoints:(id)arg2 radians:(float)arg3 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toHeight:(unsigned long long)arg2 andWidth:(unsigned long long)arg3 withRotationAngle:(float)arg4;
- (id)imageByCroppingTextFeature:(id)arg1 correctedBoundingBox:(id)arg2 padding:(struct CGPoint { double x1; double x2; })arg3 networkInputSize:(struct CGSize { double x1; double x2; })arg4;
- (id)imageByDilating;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2 strings:(id)arg3 lineWidth:(double)arg4 red:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8;
- (id)imageByOverlayingRegions:(id)arg1 strings:(id)arg2 lineWidth:(double)arg3 red:(double)arg4 green:(double)arg5 blue:(double)arg6 alpha:(double)arg7;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 paddingMode:(unsigned long long)arg3;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 paddingMode:(unsigned long long)arg3 alignCenter:(bool)arg4;
- (id)imageByRectifyingRegion:(id)arg1 homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg2;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByScaling:(double)arg1 paddingToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3 paddingMode:(unsigned long long)arg4;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)init;
- (id)initARGB8888WithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initAYUV8888WithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 properties:(id)arg2 toColorSpace:(int)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 toColorSpace:(int)arg2;
- (id)initWithCIImage:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 toColorSpace:(int)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 toColorSpace:(int)arg2 forceDataCopy:(bool)arg3;
- (id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithMTLTexture:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithMat:(const struct Mat { int (**x1)(); char *x2; int x3; int x4; int x5; int x6[32]; int x7[32]; struct SmartPtr { int (**x_8_1_1)(); void *x_8_1_2; int *x_8_1_3; } x8; int x9; int x10; int x11[32]; int x12[32]; unsigned long long x13; }*)arg1;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inColorSpace:(int)arg2;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inColorSpace:(int)arg2 toColorSpace:(int)arg3;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 colorSpace:(int)arg3;
- (id)initY8WithCVPixelBuffer:(struct __CVBuffer { }*)arg1 forceDataCopy:(bool)arg2;
- (id)initYUV888WithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (bool)isFullRange;
- (unsigned long long)numChannels;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3;
- (struct __CVBuffer { }*)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize { double x1; double x2; })arg2 adjustedToSize:(struct CGSize { double x1; double x2; }*)arg3 paddingMode:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotatedRoiByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textFeaturePoints:(id)arg2 radians:(float)arg3;
- (void)runBlockWithARGB8888Image:(id /* block */)arg1 blockOwnsMemory:(bool)arg2;
- (id)sceneStabilityMetric;
- (void)setCgImage:(struct CGImage { }*)arg1;
- (void)setCiImage:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSceneStabilityMetric:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setVImageDataIsCopy:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })vImage;
- (bool)vImageDataIsCopy;
- (unsigned long long)width;
- (void)writeToFile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (void)writeToFileWithTextPolygons:(void*)arg1;

@end
