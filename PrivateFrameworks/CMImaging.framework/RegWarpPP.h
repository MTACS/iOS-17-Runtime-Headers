
@interface RegWarpPP : NSObject <CMIRegWarp> {
    FigMetalAllocator * _allocator;
    bool  _applyGDC;
    NSObject<OS_dispatch_group> * _mtGroup;
    NSObject<OS_dispatch_queue> * _mtQueue;
    struct rwppRegistrationEngineS { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; float x_1_1_8; float x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; bool x_1_1_12; bool x_1_1_13; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; struct rwppRegistrationEngineS {} *x_2_1_3; struct { /* ? */ } *x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; struct { unsigned int x_7_2_1; struct { /* ? */ } *x_7_2_2; struct { /* ? */ } *x_7_2_3; struct { unsigned int x_4_3_1[256]; } x_7_2_4; } x_2_1_7; struct { unsigned int x_8_2_1; } x_2_1_8; } x2[4]; struct { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; bool x_3_1_5; } x3; bool x4; unsigned int x5; unsigned int x6; struct { char *x_7_1_1[2]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_7_1_2; unsigned int x_7_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; float x_4_2_5; float x_4_2_6; float x_4_2_7; float x_4_2_8; } x_7_1_4; } x7; } * _regEng;
    bool  _resourcesAllocated;
    bool  _usesExternalMemory;
}

@property (nonatomic, retain) FigMetalAllocator *allocator;
@property (nonatomic) bool applyGDC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)CheckParameters:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 imageFormat:(unsigned int)arg4;
+ (unsigned int)computeExternalMemoryBlockSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 imageFormat:(unsigned int)arg4;
+ (int)convertFromImageSizeToUnity:(struct { float x1[9]; }*)arg1 inMatrix:(struct { float x1[9]; }*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4;
+ (int)convertFromUnityToImageSize:(struct { float x1[9]; }*)arg1 inMatrix:(struct { float x1[9]; }*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4;
+ (void)getDefaults:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)arg1;
+ (unsigned int)getMaxNumCorners;

- (void).cxx_destruct;
- (int)allocateResources:(unsigned int)arg1 imageHeight:(unsigned int)arg2 imageFormat:(unsigned int)arg3 externalMemory:(void*)arg4 externalMemorySize:(unsigned int)arg5;
- (id)allocator;
- (bool)applyGDC;
- (int)calculateHistEqLUT:(struct { unsigned char x1[256]; }*)arg1 fromHistogram:(struct { unsigned int x1[256]; }*)arg2;
- (int)calculateTotalCornerStrength:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 mapping:(struct { unsigned char x1[256]; }*)arg3 outTotalCornerStrength:(float*)arg4;
- (int)computeHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 referenceKeypoints:(struct { float x1; float x2; float x3; }*)arg2 nonReferenceKeypoints:(struct { float x1; float x2; float x3; }*)arg3 keypointsCount:(unsigned int)arg4;
- (void)constructPyramid:(struct __CVBuffer { }*)arg1 selector:(unsigned int)arg2 mapping:(struct { unsigned char x1[256]; }*)arg3 level0Only:(bool)arg4;
- (void)dealloc;
- (id)dispatchQueue;
- (int)getNonReferenceKeypoints:(struct { float x1; float x2; float x3; }*)arg1;
- (int)getNormalizedPoints:(struct { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 numPairs:(unsigned int*)arg2;
- (int)getReferenceKeypoints:(struct { float x1; float x2; float x3; }*)arg1;
- (id)initWithConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)arg1;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 seedTransform:(struct { float x1[9]; }*)arg3 outputTransform:(struct { float x1[9]; }*)arg4 mapping:(struct { unsigned char x1[256]; }*)arg5;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 outputTransform:(struct { float x1[9]; }*)arg2;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 seedTransform:(struct { float x1[9]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3 mapping:(struct { unsigned char x1[256]; }*)arg4;
- (int)processParameters:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inputImage:(struct __CVBuffer { }*)arg2;
- (int)processReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4;
- (int)processReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4 mapping:(struct { unsigned char x1[256]; }*)arg5;
- (int)processReference:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 numKeypoints:(unsigned int*)arg3;
- (int)processReference:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 numKeypoints:(unsigned int*)arg3 mapping:(struct { unsigned char x1[256]; }*)arg4;
- (void)releaseResources;
- (void)setAllocator:(id)arg1;
- (void)setApplyGDC:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
