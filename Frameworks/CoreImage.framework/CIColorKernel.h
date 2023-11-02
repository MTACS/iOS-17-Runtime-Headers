
@interface CIColorKernel : CIKernel

@property (nonatomic) bool perservesAlpha;

+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)kernelWithString:(id)arg1;

- (id)_initWithReflection:(struct CIKernelReflection { int x1; int x2; char *x3; char *x4; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x_3_2_1; } x_5_1_3; } x5; struct vector<std::string, std::allocator<std::string>> { void *x_6_1_1; void *x_6_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_6_1_3; } x6; id x7; unsigned int x8; int x9; unsigned long long x10; unsigned long long x11; bool x12; bool x13; })arg1 constants:(id)arg2 constantTypes:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arguments:(id)arg2 options:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (bool)canReduceOutputChannels;
- (id)initWithString:(id)arg1;
- (bool)perservesAlpha;
- (bool)preservesRange;
- (void)setCanReduceOutputChannels:(bool)arg1;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setPreservesRange:(bool)arg1;

@end
