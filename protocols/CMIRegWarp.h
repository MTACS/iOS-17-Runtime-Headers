
@protocol CMIRegWarp <NSObject>

@required

- (int)allocateResources:(unsigned int)arg1 imageHeight:(unsigned int)arg2 imageFormat:(unsigned int)arg3 externalMemory:(void*)arg4 externalMemorySize:(unsigned int)arg5;
- (FigMetalAllocator *)allocator;
- (bool)applyGDC;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 outputTransform:(struct { float x1[9]; }*)arg3;
- (int)processNonReference:(struct __CVBuffer { }*)arg1 outputTransform:(struct { float x1[9]; }*)arg2;
- (int)processReference:(struct __CVBuffer { }*)arg1 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 numKeypoints:(unsigned int*)arg4;
- (int)processReference:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 numKeypoints:(unsigned int*)arg3;
- (void)releaseResources;
- (void)setAllocator:(FigMetalAllocator *)arg1;
- (void)setApplyGDC:(bool)arg1;

@end
