
@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting> {
    VNDepthRepresentation * _depthRepresentation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _depthRepresentationLock;
    VNImageSourceManager * _imageSourceManager;
    NSDictionary * _options;
    int  _orientation;
    CIImage * _origCIImage;
    unsigned long long  _origImageHeight;
    unsigned long long  _origImageWidth;
    struct __CVBuffer { } * _origPixelBuffer;
    struct opaqueCMSampleBuffer { } * _origSampleBuffer;
    CIContext * _passedInCIContext;
    VNImageBufferCache * _pixelBufferRepsCache;
    VNSession * _session;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullImageBufferRect;
@property (readonly) unsigned long long height;
@property (readonly) int orientation;
@property (readonly) NSNumber *sceneStabilityMetric;
@property (readonly) VNSession *session;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; } timingInfo;
@property (readonly) unsigned long long width;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeCenterCropRectFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImageSize:(struct CGSize { double x1; double x2; })arg2 calculatedScaleX:(double*)arg3 calculatedScaleY:(double*)arg4;
+ (const void*)mapOrientationToRotationDegrees;

- (void).cxx_destruct;
- (int)aspect;
- (int)aspectForRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id*)arg6;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id*)arg7;
- (struct __CVBuffer { }*)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id*)arg5 pixelBufferRepsCacheKey:(id*)arg6;
- (struct __CVBuffer { }*)cachedPixelBufferRepresentationForKey:(id)arg1;
- (struct __CVBuffer { }*)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 pixelFormat:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pixelFormat:(unsigned int)arg3 options:(id)arg4 error:(id*)arg5 pixelBufferRepsCacheKey:(id*)arg6;
- (struct __CVBuffer { }*)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7 calculatedNormalizedOriginOffset:(struct CGPoint { double x1; double x2; }*)arg8 calculatedScaleX:(double*)arg9 calculatedScaleY:(double*)arg10;
- (struct __CVBuffer { }*)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7 calculatedNormalizedOriginOffset:(struct CGPoint { double x1; double x2; }*)arg8 calculatedScaleX:(double*)arg9 calculatedScaleY:(double*)arg10 pixelBufferRepsCacheKey:(id*)arg11;
- (struct __CVBuffer { }*)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 error:(id*)arg6 pixelBufferRepsCacheKey:(id*)arg7;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)fileURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullImageBufferRect;
- (bool)getCameraIntrinsicsAvailable:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1;
- (bool)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x1; double x2; }*)arg1;
- (bool)getPixelFocalLengthIfAvailable:(float*)arg1;
- (unsigned long long)height;
- (id)imageProperties;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4 session:(id)arg5;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4 session:(id)arg5;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)orientation;
- (struct CGImage { }*)originalCGImage;
- (struct __CVBuffer { }*)originalPixelBuffer;
- (void)purgeCachedRepresentations;
- (id)sceneStabilityMetric;
- (id)sequencedRequestPreviousObservationsKey;
- (id)session;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })timingInfo;
- (bool)wantsSequencedRequestObservationsRecording;
- (unsigned long long)width;

@end
