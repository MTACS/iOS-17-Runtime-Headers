
@interface VNEspressoHelpers : NSObject

+ (id)_alternatePathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)_locateFrameworkBundleForResourceWithName:(id)arg1 resourceDirectory:(id*)arg2 error:(id*)arg3;
+ (struct __CVBuffer { }*)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg2 error:(id*)arg3;
+ (bool)createSingleNetworkPlanFromModelPath:(id)arg1 forComputeDevice:(id)arg2 lowPriorityMode:(bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 networkConfiguration:(id)arg6 explicitNetworkLayersStorageType:(int)arg7 memoryPoolId:(unsigned long long)arg8 espressoResources:(id*)arg9 error:(id*)arg10;
+ (bool)createSingleNetworkPlanFromModelPath:(id)arg1 forComputeDevice:(id)arg2 lowPriorityMode:(bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 networkConfiguration:(id)arg6 memoryPoolId:(unsigned long long)arg7 espressoResources:(id*)arg8 error:(id*)arg9;
+ (int)espressoDeviceIDForComputeDevice:(id)arg1;
+ (int)espressoEngineForComputeDevice:(id)arg1;
+ (int)espressoStorageTypeForComputeDevice:(id)arg1;
+ (bool)feedForwardEspressoBufferForNetwork:(struct { void *x1; int x2; }*)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(bool)arg4 error:(id*)arg5;
+ (bool)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofBlobNamed:(id)arg3 forNetworkModelFileWithPath:(id)arg4 error:(id*)arg5;
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id*)arg2;
+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id*)arg2;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 error:(id*)arg2;
+ (bool)renderEspressoBufferImage:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 intoCVPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;

@end
