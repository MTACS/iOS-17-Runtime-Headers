
@interface CIContext : NSObject {
    void * _priv;
}

@property (readonly) unsigned long long identifier;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;
@property (nonatomic, readonly) int workingFormat;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
+ (id)_singletonContext;
+ (void)clearArchives;
+ (id)context;
+ (id)contextWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLCommandQueue:(id)arg1;
+ (id)contextWithMTLCommandQueue:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (struct CGColorSpace { }*)defaultGrayColorSpace;
+ (struct CGColorSpace { }*)defaultRGBColorSpace;
+ (struct CGColorSpace { }*)defaultWorkingColorSpace;
+ (void*)internalCLContextWithOptions:(id)arg1;
+ (void*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2;
+ (void*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (void*)internalContextWithMTLCommandQueue:(id)arg1 options:(id)arg2;
+ (void*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (void*)internalGLContextWithOptions:(id)arg1;
+ (bool)loadArchive:(id)arg1;
+ (bool)loadArchiveWithName:(id)arg1 fromURL:(id)arg2;
+ (void)purgeArchive:(id)arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (id)HEIF10RepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3 error:(id*)arg4;
- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3;
- (id)OpenEXRRepresentationOfImage:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)_HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (id)_JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (id)_TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (struct CGImage { }*)_createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 premultiplied:(bool)arg4 colorSpace:(struct CGColorSpace { }*)arg5 deferred:(struct Trilean { BOOL x1; })arg6 renderCallback:(id /* block */)arg7;
- (id)_createClone;
- (id)_dataRepresentationOfImage:(id)arg1 UTIType:(id)arg2 format:(int)arg3 premultiplied:(bool)arg4 colorSpace:(struct CGColorSpace { }*)arg5 options:(id)arg6 addAuxData:(bool)arg7 keysToMerge:(id)arg8 error:(id*)arg9;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void)_insertEventMarker:(const char *)arg1;
- (void*)_internalContext;
- (bool)_isCGBackedContext;
- (bool)_isGLBackedContext;
- (struct CGColorSpace { }*)_outputColorSpace;
- (id)_pdfDataRepresentation;
- (void)_performFaceDetection:(id)arg1 image:(id)arg2 orientation:(int)arg3 filter:(id)arg4;
- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(bool)arg3 forClear:(bool)arg4 error:(id*)arg5;
- (void)abort;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clearCaches;
- (id)clientCommandQueue;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(bool)arg5;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 premultiplied:(bool)arg4 colorSpace:(struct CGColorSpace { }*)arg5 deferred:(bool)arg6 renderCallback:(id /* block */)arg7;
- (struct CGLayer { }*)createCGLayerWithSize:(struct CGSize { double x1; double x2; })arg1 info:(struct __CFDictionary { }*)arg2;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3;
- (struct __IOSurface { }*)createIOSurface:(id)arg1;
- (struct __IOSurface { }*)createIOSurface:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 glassesMatte:(id)arg5 gainMap:(id)arg6 orientation:(unsigned int)arg7 options:(id)arg8;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 orientation:(unsigned int)arg5 options:(id)arg6;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned int)arg4 options:(id)arg5;
- (id)depthBlurEffectFilterForImageData:(id)arg1 options:(id)arg2;
- (id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2;
- (id)description;
- (id)device;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)flatten:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithMTLCommandQueue:(id)arg1 options:(id)arg2;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })inputImageMaximumSize;
- (id)internalCommandQueue;
- (void)invalidate;
- (bool)isMetalBased;
- (bool)isOpenCLBased;
- (bool)isOpenGLBased;
- (bool)loadArchive:(id)arg1;
- (bool)loadArchiveWithName:(id)arg1 fromURL:(id)arg2;
- (void)lock;
- (unsigned long long)maximumInputImageSize;
- (unsigned long long)maximumOutputImageSize;
- (bool)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)objectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })outputImageMaximumSize;
- (bool)prepareRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (void)reclaimResources;
- (void)render:(id)arg1;
- (void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)startTaskToClear:(id)arg1 error:(id*)arg2;
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;
- (bool)testArchive:(id)arg1;
- (void)unlock;
- (struct CGColorSpace { }*)workingColorSpace;
- (int)workingFormat;
- (bool)writeHEIF10RepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)writeOpenEXRRepresentationOfImage:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_sharedIconCompositorContext;

// Image: /System/Library/PrivateFrameworks/MobileIcons.framework/MobileIcons

+ (id)_MI_sharedIconCompositorContext;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

- (id)pi_createColorCubeDataForFilters:(id)arg1 dimension:(unsigned long long)arg2 colorSpace:(struct CGColorSpace { }*)arg3;

@end
