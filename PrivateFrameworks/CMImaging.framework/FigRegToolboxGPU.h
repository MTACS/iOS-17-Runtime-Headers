
@interface FigRegToolboxGPU : NSObject {
    <MTLTexture> * _cornerDetectIntermediateTexture;
    unsigned int  _gridHeight;
    unsigned int  _gridNumCells;
    unsigned int  _gridWidth;
    unsigned int  _imageHeight;
    unsigned int  _imageWidth;
    struct { 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadgroupsPerGrid; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadsPerThreadgroup; 
    }  _infoCornerDetectionFinalPass;
    struct { 
        struct { 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadgroupsPerGrid; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadsPerThreadgroup; 
        } level[8]; 
    }  _infoCornerDetectionFirstPass4x4;
    struct { 
        struct { 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadgroupsPerGrid; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadsPerThreadgroup; 
        } level[8]; 
    }  _infoCornerResponse;
    struct { 
        struct { 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadgroupsPerGrid; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadsPerThreadgroup; 
        } level[8]; 
    }  _infoDownscale2to1;
    struct { 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadgroupsPerGrid; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadsPerThreadgroup; 
    }  _infoNccMatch;
    struct { 
        struct { 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadgroupsPerGrid; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } threadsPerThreadgroup; 
        } level[8]; 
    }  _infoSimple3x3BoxFilter;
    struct { 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadgroupsPerGrid; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } threadsPerThreadgroup; 
    }  _infoWarpImage;
    <MTLBuffer> * _internalSolverElemList;
    <MTLBuffer> * _internalTransformResults;
    FigMetalContext * _metalContext;
    struct { 
        short searchRadius; 
        short searchDiameter; 
        unsigned short searchSpaceSize; 
        short templateRadius; 
        short minCornerResponseThreshold; 
        short unusedPadding; 
        float minNCCThreshold; 
        float scaler; 
    }  _nccParmsFixed;
    <MTLBuffer> * _nccWorkStorage;
    unsigned int  _numPyrLevels;
    <MTLComputePipelineState> * _pplnAffineSolver;
    <MTLComputePipelineState> * _pplnCornerDetectionFinalPass;
    <MTLComputePipelineState> * _pplnCornerDetectionFirstPass4x4;
    <MTLComputePipelineState> * _pplnCornerResponse;
    <MTLComputePipelineState> * _pplnDownscale2to1;
    <MTLComputePipelineState> * _pplnDownscale2to1WithMapping;
    <MTLComputePipelineState> * _pplnHomographySolver;
    <MTLComputePipelineState> * _pplnNccMatch;
    <MTLComputePipelineState> * _pplnRigidSolver;
    <MTLComputePipelineState> * _pplnSimple3x3BoxFilter;
    <MTLComputePipelineState> * _pplnSpecialImageConverterA;
    <MTLComputePipelineState> * _pplnWarpImage;
    <MTLTexture> * _pyramid1CornerResponse;
    <MTLBuffer> * _pyramid1Corners;
    <MTLTexture> * _pyramid1Image;
    <MTLTexture> * _pyramid1Initial;
    <MTLBuffer> * _pyramid2Corners;
    <MTLTexture> * _pyramid2Image;
    struct { 
        unsigned int w; 
        unsigned int h; 
    }  _pyramidLevelsDim;
    <MTLTexture> * _referenceImage;
    float  _referenceImagePixelHistCoef;
    unsigned char  _referenceImagePixelMapping;
    bool  _referenceImagePixelMappingFlag;
    bool  _resourcesAvailable;
    unsigned int  _searchArea;
}

- (void).cxx_destruct;
- (int)allocateResources:(unsigned int)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 gridWidth:(unsigned int)arg4 gridHeight:(unsigned int)arg5 templateRadius:(unsigned int)arg6 searchRadius:(unsigned int)arg7 minNCCThreshold:(float)arg8;
- (int)allocateResourcesSimple:(unsigned int)arg1 imageHeight:(unsigned int)arg2 numberOfCorners:(unsigned int*)arg3;
- (int)computeTransform:(id)arg1 transform:(struct { float x1[9]; unsigned int x2; float x3; }*)arg2 outputCorners:(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 solverSelector:(int)arg4 histogram:(struct { int x1; struct { unsigned int x_2_1_1[256]; } x2; }*)arg5 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (int)computeTransformInternal:(id)arg1 solverKernel:(id)arg2 solverOutputResults:(id)arg3 histogram:(struct { int x1; struct { unsigned int x_2_1_1[256]; } x2; }*)arg4 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 waitForCompletion:(bool)arg6;
- (void)dealloc;
- (id)init;
- (id)initWithCommandQueue:(id)arg1;
- (int)processReferenceImage:(id)arg1 histogram:(struct { int x1; struct { unsigned int x_2_1_1[256]; } x2; }*)arg2 doWaitForIdle:(bool)arg3;
- (int)releaseResources;
- (int)specialImageConverterA:(struct __CVBuffer { }*)arg1 outTexture1:(struct __CVBuffer { }*)arg2 outTexture2:(struct __CVBuffer { }*)arg3 outTexture3:(struct __CVBuffer { }*)arg4 doWaitForIdle:(bool)arg5;
- (int)warpTargetImage:(id)arg1 outTexChma:(id)arg2 inTexLuma:(id)arg3 inTexChma:(id)arg4 solverSelector:(int)arg5 histogram:(struct { int x1; struct { unsigned int x_2_1_1[256]; } x2; }*)arg6 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7 doWaitForIdle:(bool)arg8;

@end
