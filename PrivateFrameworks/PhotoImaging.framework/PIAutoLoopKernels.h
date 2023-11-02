
@interface PIAutoLoopKernels : NSObject

+ (id)alphaCompositingKernel;
+ (id)blur3x3Kernel;
+ (id)blur5x5Kernel;
+ (id)blur7x7Kernel;
+ (id)dynamismMapKernel;
+ (id)dynamismMapRefineKernel;
+ (id)fusionKernel;
+ (id)homographyKernel;
+ (id)longExposureFusionKernels;
+ (id)nccCoarseKernel;
+ (id)nccKernel;
+ (id)rgbToLumaKernel;

@end
