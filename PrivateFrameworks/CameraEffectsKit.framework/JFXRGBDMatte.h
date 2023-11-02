
@interface JFXRGBDMatte : JFXMatting {
    struct __CVBuffer { } * _alphaMatteHistory;
    JFXPixelRotationSession * _colorRotator;
    struct ContourMemoryPool { char *x1; char *x2; int *x3; int *x4; } * _contourMemoryPool;
    unsigned long long  _currentMattingStatus;
    char * _depthBufferFull;
    char * _depthBufferHalf;
    int  _depthHist;
    struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; } * _depthProcessingData;
    struct CGSize { 
        double width; 
        double height; 
    }  _depthSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _depthSizeRotated;
    bool  _disableMattingMultithreading;
    int  _faceRectDepth;
    struct __CVPixelBufferPool { } * _fixedPointDepthPool;
    unsigned int  _grabCutCounter;
    PVComputeGrabCut * _grabCutModules;
    int  _heightOfMattingWin;
    JFXImageScaler * _imageScaler;
    long long  _interfaceOrientation;
    bool  _isRepeatingFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _largestFaceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastLargestFaceRect;
    JFXPixelRotationSession * _matteRotator;
    int  _minObjectDistance;
    bool  _motionDetected;
    unsigned long long  _numFramesWithVeryClosePixels;
    int  _numberOfGaussiansBackgroundGMM;
    int  _numberOfGaussiansForegroundGMM;
    int  _numberOfIterationsGrabcut;
    unsigned long long  _previousMattingStatus;
    NSObject<OS_dispatch_queue> * _processQ;
    NSObject<OS_dispatch_semaphore> * _processThrottle;
    struct __CVPixelBufferPool { } * _processedMattePool;
    struct __CVPixelBufferPool { } * _rotatedMattePool;
    struct __CVPixelBufferPool { } * _scaledDestinationPool;
    struct __CVPixelBufferPool { } * _scaledSourcePool;
    NSObject<OS_dispatch_queue> * _submissionQ;
    int  _topOfHeadHalf;
    bool  _usingFaceRect;
    bool  _usingLargerRect;
    bool  _usingforegroundSegBooster;
    char * _vImageTempBuffer;
    bool  _visualizeFaceRect;
}

+ (bool)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;

- (void).cxx_destruct;
- (void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct __CVBuffer { }*)createInvertedMatte:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct __CVBuffer { }*)createTemporalFilteredMatte:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (void)depthToAlphaMap:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)erodeAndDilateMatte:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)expansionOfKnownRegionsRGBD:(struct __CVBuffer { }*)arg1 processingData:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg2 regionWin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 centerOfRow:(int)arg4;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })featherMatte:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)findDepthForFace:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)findLocalMattingRect:(int*)arg1 processingData:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg2 mattingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)findRectOrientationRightLeft:(int*)arg1 numContourPixels:(int)arg2 winHeight:(int)arg3 halfHeight:(int)arg4 originY:(int*)arg5 sizeHeight:(int*)arg6 isRight:(bool)arg7;
- (void)getDepthData:(struct __CVBuffer { }*)arg1 processData:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg2;
- (void)grabCutWithTrimap:(char *)arg1 color:(struct __CVBuffer { }*)arg2 processWin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initForFrameSet:(id)arg1;
- (void)innerOuterFusion:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1 processWin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isValidForCameraFrameSet:(id)arg1;
- (char *)localDepthBuffer;
- (char *)localDepthBufferBig;
- (char *)localDepthBufferSmall;
- (char *)localDepthBufferTemp;
- (struct __CVBuffer { }*)localMattingHalfRGBD:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1 colorBuffer:(struct __CVBuffer { }*)arg2;
- (char *)makeTrimap:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)mattingGrabCut:(char *)arg1 depthMap:(char *)arg2 colorBuffer:(struct __CVBuffer { }*)arg3 processWin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)moveLocalDepthBufferToDepthOuter:(struct DepthProcessingDataRGBD { int *x1; int *x2; int *x3; unsigned long long x4; unsigned long long x5; struct __CVBuffer {} *x6; char *x7; id x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; char *x13; int x14; int x15; int x16; }*)arg1;
- (void)postProcessing:(const char *)arg1 depthDataSmall:(const char *)arg2 depthData:(const char *)arg3 RGBDMatte:(char *)arg4 halfHeight:(int)arg5 halfWidth:(int)arg6;
- (struct __CVBuffer { }*)processAlphaMapUsingDepthAndColor:(struct __CVBuffer { }*)arg1 colorBuffer:(struct __CVBuffer { }*)arg2;
- (void)requestMattingStatus;

@end
