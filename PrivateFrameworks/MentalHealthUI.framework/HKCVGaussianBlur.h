
@interface HKCVGaussianBlur : NSObject {
    <MTLBinaryArchive> * _archive;
    NSMutableDictionary * _cache;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _clipRect;
    HKCVKernelCache * _kernelCache;
    <MTLLibrary> * _library;
    struct { 
        double *plan; 
        unsigned long long _numSteps; 
        float _scale; 
        int _planSteps[8]; 
    }  _planInfo;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*origin; 
    }  _planStepROIs;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*origin; 
    }  _r;
    float  _sigma;
}

@property (nonatomic, readonly) <MTLBinaryArchive> *archive;
@property (nonatomic, readonly) NSMutableDictionary *cache;
@property (nonatomic, readonly) struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; } clipRect;
@property (nonatomic, readonly) HKCVKernelCache *kernelCache;
@property (nonatomic, readonly) <MTLLibrary> *library;
@property (nonatomic, readonly) struct { double *x1; unsigned long long x2; float x3; int x4[8]; } planInfo;
@property (nonatomic, readonly) float sigma;

- (id)archive;
- (id)cache;
- (id)cachedTextureForDevice:(id)arg1 pixelInfo:(struct WMPSPixelInfo { unsigned int x1 : 10; unsigned int x2 : 6; unsigned int x3 : 4; unsigned int x4 : 4; unsigned int x5 : 4; unsigned int x6 : 4; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 6; unsigned int x18 : 4; unsigned int x19 : 3; unsigned int x20 : 2; })arg2 identifier:(unsigned long long)arg3 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 protectionOptions:(unsigned long long)arg5;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })clipRect;
- (void)dealloc;
- (id)initWithSigma:(float)arg1 clipRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 kernelCache:(id)arg3 archive:(id)arg4 library:(id)arg5;
- (id)kernelCache;
- (id)library;
- (struct { double *x1; unsigned long long x2; float x3; int x4[8]; })planInfo;
- (void)prepareRAndPlanStepsROIs;
- (float)sigma;

@end
