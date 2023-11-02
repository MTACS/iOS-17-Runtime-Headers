
@interface CIKernel : NSObject {
    void * _priv;
}

@property (nonatomic) bool canReduceOutputChannels;
@property (readonly) NSString *name;
@property (nonatomic, readonly) int outputFormat;
@property (nonatomic) struct CGSize { double x1; double x2; } outputGroupSize;
@property (nonatomic) bool perservesAlpha;
@property (nonatomic) bool preservesRange;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)cache;
+ (id)cacheKeyForFunctionName:(id)arg1 fromCIKernelLibrary:(id)arg2 options:(id)arg3;
+ (id)cachedKernelWithFunctionName:(id)arg1 fromCIKernelLibrary:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)cachedKernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 constants:(id)arg3 error:(id*)arg4;
+ (id)cachedKernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 error:(id*)arg3;
+ (id)cachedKernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)cachedKernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4;
+ (id)cachedKernelWithString:(id)arg1;
+ (void)clearCache;
+ (id)colorMatrixBiasKernel;
+ (id)internalCachedKernelWithString:(id)arg1;
+ (id)kernelNamesFromMetalLibrary:(id)arg1;
+ (id)kernelNamesFromMetalLibraryData:(id)arg1;
+ (id)kernelWithFunctionName:(id)arg1 fromCIKernelLibrary:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 constants:(id)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 error:(id*)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibrary:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4;
+ (id)kernelWithInternalRepresentation:(const void*)arg1;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithMetalString:(id)arg1 error:(id*)arg2;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 andCIKernelLibrary:(id)arg2 messageLog:(id)arg3;
+ (id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;

- (SEL)ROISelector;
- (id)_initInternalWithString:(id)arg1;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (id)_initWithReflection:(struct CIKernelReflection { int x1; int x2; char *x3; char *x4; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x_3_2_1; } x_5_1_3; } x5; struct vector<std::string, std::allocator<std::string>> { void *x_6_1_1; void *x_6_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_6_1_3; } x6; id x7; unsigned int x8; int x9; unsigned long long x10; unsigned long long x11; bool x12; bool x13; })arg1;
- (id)_initWithReflection:(struct CIKernelReflection { int x1; int x2; char *x3; char *x4; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x_3_2_1; } x_5_1_3; } x5; struct vector<std::string, std::allocator<std::string>> { void *x_6_1_1; void *x_6_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_6_1_3; } x6; id x7; unsigned int x8; int x9; unsigned long long x10; unsigned long long x11; bool x12; bool x13; })arg1 constants:(id)arg2 constantTypes:(id)arg3;
- (id)_initWithString:(id)arg1 andCIKernelLibrary:(id)arg2 usingCruftCompatibility:(bool)arg3 isInternal:(bool)arg4;
- (void*)_internalRepresentation;
- (bool)_isValidOutputPixelFormat:(int)arg1;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(void*)arg2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (bool)canReduceOutputChannels;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)name;
- (int)outputFormat;
- (struct CGSize { double x1; double x2; })outputGroupSize;
- (id)parameters;
- (bool)perservesAlpha;
- (bool)preservesRange;
- (void)setCanReduceOutputChannels:(bool)arg1;
- (void)setOutputGroupSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setPreservesRange:(bool)arg1;
- (void)setROISelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)kernelsDictionaryWithString:(id)arg1;

@end
