
@interface FigRegWarpPPGPU : NSObject <CMIRegWarp> {
    bool  _allocateBuffersWithAllocator;
    bool  _applyGDC;
    struct { 
        struct { 
            unsigned int w; 
            unsigned int h; 
        } dims; 
        struct { 
            unsigned int x; 
            unsigned int y; 
            unsigned int width; 
            unsigned int height; 
        } roi; 
        struct { 
            float normX[2]; 
            float normY[2]; 
            float inverseX[2]; 
            float inverseY[2]; 
        } normCoef; 
        float minNCCThreshold; 
        short minCornerResponseThreshold; 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*pixelPitch; 
        } refGDCParams; 
        struct { 
            void*pixelPitch; 
        } nrfGDCParams; 
        bool applyGDC; 
    }  _cornerMatchingParams;
    unsigned int  _imageHeight;
    unsigned int  _imageWidth;
    float  _inlierThreshold;
    bool  _isShaderHarvesting;
    unsigned int  _maxNumberOfPyramidLevels;
    FigMetalContext * _metal;
    MPSImageHistogram * _mpsHist;
    struct { 
        unsigned long long numberOfHistogramEntries; 
        bool histogramForAlpha; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*minPixelValue; 
    }  _mpsHistCfg;
    MPSImageHistogramEqualization * _mpsHistEq;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*pixelPitch; 
    }  _nonReferenceGDCParams;
    <MTLBuffer> * _nonReferencePyramidCorners;
    <MTLTexture> * _nonReferencePyramidImage;
    struct { 
        float normX[2]; 
        float normY[2]; 
        float inverseX[2]; 
        float inverseY[2]; 
    }  _normCoefs;
    unsigned int  _numPyrLevels;
    bool  _performHistEq;
    struct { 
        unsigned int w; 
        unsigned int h; 
    }  _pyramidLevelsDim;
    struct { 
        unsigned int x; 
        unsigned int y; 
        unsigned int width; 
        unsigned int height; 
    }  _pyramidLevelsRoi;
    unsigned int  _ransacMinNumInliers;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*pixelPitch; 
    }  _referenceGDCParams;
    <MTLBuffer> * _referencePyramidCorners;
    <MTLTexture> * _referencePyramidImage;
    struct { 
        unsigned int x; 
        unsigned int y; 
        unsigned int width; 
        unsigned int height; 
    }  _roi;
    FigRegWarpPPGPUShaders * _shaders;
    bool  _skipInitialDownsample;
}

@property (nonatomic, retain) FigMetalAllocator *allocator;
@property (nonatomic) bool applyGDC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int maxNumberOfPyramidLevels;
@property (readonly) Class superclass;

+ (int)prewarmShaders:(id)arg1;

- (void).cxx_destruct;
- (int)_constructPyramid:(id*)arg1 withTexture:(id)arg2 mapping:(struct { unsigned char x1[256]; }*)arg3 level0Only:(bool)arg4;
- (int)_convertTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 toGPUTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg2;
- (int)_detectCorners:(id)arg1 roi:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 corners:(id)arg3 pyrLevel:(unsigned int)arg4;
- (int)_determineNumPyrLevels:(unsigned int)arg1 pyramid0Height:(unsigned int)arg2;
- (id)_newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 label:(id)arg3;
- (void)_releaseBuffer:(id*)arg1;
- (int)_setDefaultCornerMatchingParams;
- (int)_setNormCoefs:(struct { float x1[2]; float x2[2]; float x3[2]; float x4[2]; }*)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (int)_updatePyramidRoi;
- (int)_verifyInputPixelFormat:(unsigned long long)arg1;
- (int)allocateResources:(unsigned int)arg1 imageHeight:(unsigned int)arg2 imageFormat:(unsigned int)arg3 externalMemory:(void*)arg4 externalMemorySize:(unsigned int)arg5;
- (int)allocateResourcesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (id)allocator;
- (bool)applyGDC;
- (int)computeHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 referenceKeypoints:(id)arg2 nonReferenceKeypoints:(id)arg3 keypointsCount:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithOptionalCommandQueue:(id)arg1 config:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)arg2;
- (unsigned int)maxNumberOfPyramidLevels;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 outputTransform:(struct { float x1[9]; }*)arg2;
- (int)processNonReferenceTexture:(id)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3;
- (int)processNonReferenceTexture:(id)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3 mapping:(struct { unsigned char x1[256]; }*)arg4;
- (int)processNonReferenceTexture:(id)arg1 outputTransform:(struct { float x1[9]; }*)arg2;
- (int)processReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4;
- (int)processReference:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 numKeypoints:(unsigned int*)arg3;
- (int)processReferenceTexture:(id)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4;
- (int)processReferenceTexture:(id)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4 mapping:(struct { unsigned char x1[256]; }*)arg5;
- (int)processReferenceTexture:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 numKeypoints:(unsigned int*)arg3;
- (void)releaseResources;
- (void)setAllocator:(id)arg1;
- (void)setApplyGDC:(bool)arg1;
- (void)setMaxNumberOfPyramidLevels:(unsigned int)arg1;

@end
