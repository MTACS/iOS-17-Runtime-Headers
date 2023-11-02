
@interface _IIOXDRImage : NSObject {
    struct __CVBuffer { } * _gainMapBuffer;
    struct CGImageMetadata { } * _gainMapMetadata;
    int  _gainMapOrientation;
    double  _headroom;
    struct __CVBuffer { } * _imageBuffer;
    NSDictionary * _imageMetadata;
    int  _orientation;
    struct CGColorSpace { } * _space;
    long long  _type;
}

@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (readonly) struct __CVBuffer { }*gainMapBuffer;
@property (nonatomic, retain) struct CGImageMetadata { }*gainMapMetadata;
@property (nonatomic) int gainMapOrientation;
@property (nonatomic) double headroom;
@property (readonly) unsigned long long height;
@property (readonly) struct __CVBuffer { }*imageBuffer;
@property (nonatomic, copy) NSDictionary *imageMetadata;
@property (nonatomic, readonly) NSDictionary *makerNote;
@property (nonatomic) int orientation;
@property (readonly) long long type;
@property (readonly) unsigned long long width;

+ (bool)canProcessInputBufferWithAttributes:(id)arg1;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })computeGridSizeForThreadGroupSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 imageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })computeThreadGroupSizeForImageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pipelineState:(id)arg2;
+ (bool)convertEDR:(id)arg1 toHLG:(id)arg2;
+ (bool)convertEDR:(id)arg1 toMPP:(id)arg2;
+ (bool)convertEDR:(id)arg1 toPQ:(id)arg2;
+ (bool)convertEDR:(id)arg1 toSDR:(id)arg2;
+ (bool)convertHLG:(id)arg1 toEDR:(id)arg2;
+ (bool)convertHLG:(id)arg1 toHLG:(id)arg2;
+ (bool)convertHLG:(id)arg1 toMPP:(id)arg2;
+ (bool)convertHLG:(id)arg1 toSDR:(id)arg2;
+ (bool)convertImage:(id)arg1 toImage:(id)arg2;
+ (bool)convertMPP:(id)arg1 toEDR:(id)arg2;
+ (bool)convertMPP:(id)arg1 toHLG:(id)arg2;
+ (bool)convertMPP:(id)arg1 toPQ:(id)arg2;
+ (bool)convertPQ:(id)arg1 toEDR:(id)arg2;
+ (bool)convertPQ:(id)arg1 toMPP:(id)arg2;
+ (bool)convertPQ:(id)arg1 toSDR:(id)arg2;
+ (bool)convertSDR:(id)arg1 toEDR:(id)arg2;
+ (struct CGImageMetadata { }*)createGainMapMetadataWithHeadroom:(double)arg1;
+ (double)gainMapHeadroomForHDRGain:(double)arg1 gainMapValue:(double)arg2;
+ (bool)getColorTransform:(struct { struct { int x_1_1_1; struct XDRColorTRCParametric { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_1_1_2; } x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; }*)arg1 fromSourceSpace:(struct CGColorSpace { }*)arg2 toTargetSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
+ (bool)getGainMapHeadroom:(double*)arg1 fromMetadata:(struct CGImageMetadata { }*)arg2;
+ (bool)getGainMapHeadroom:(double*)arg1 fromProperties:(id)arg2;
+ (bool)getGainMapVersionMajor:(unsigned long long*)arg1 minor:(unsigned long long*)arg2 fromMetadata:(struct CGImageMetadata { }*)arg3;
+ (bool)getInputYCCMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 chromaSubsampling:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 forBuffer:(struct __CVBuffer { }*)arg3;
+ (bool)getOutputYCCMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 chromaSubsampling:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 forBuffer:(struct __CVBuffer { }*)arg3;
+ (id)metalCommandQueue;
+ (id)metalComputePipelineStateWithFunctionName:(id)arg1;
+ (id)metalDevice;
+ (id)metalLibrary;
+ (id)metalLibraryFunctionWithName:(id)arg1;
+ (unsigned long long)metalPixelFormatForPixelFormat:(unsigned int)arg1 plane:(unsigned int)arg2;
+ (id)metalTextureFromBuffer:(struct __CVBuffer { }*)arg1 plane:(unsigned int)arg2;
+ (unsigned int)preferredPixelFormatForInputFormat:(unsigned int)arg1 outputColorSpace:(struct CGColorSpace { }*)arg2;

- (void).cxx_destruct;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (struct __CVBuffer { }*)gainMapBuffer;
- (struct CGImageMetadata { }*)gainMapMetadata;
- (int)gainMapOrientation;
- (double)headroom;
- (unsigned long long)height;
- (struct __CVBuffer { }*)imageBuffer;
- (id)imageMetadata;
- (id)initWithImageBuffer:(struct __CVBuffer { }*)arg1 gainMapBuffer:(struct __CVBuffer { }*)arg2;
- (id)makerNote;
- (int)orientation;
- (void)setGainMapMetadata:(struct CGImageMetadata { }*)arg1;
- (void)setGainMapOrientation:(int)arg1;
- (void)setHeadroom:(double)arg1;
- (void)setImageMetadata:(id)arg1;
- (void)setOrientation:(int)arg1;
- (long long)type;
- (unsigned long long)width;

@end
