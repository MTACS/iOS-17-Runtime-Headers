
@interface ARQLDevice : NSObject

+ (bool)isRenderTier1;
+ (bool)isRenderTier2;
+ (bool)isRenderTier3;
+ (bool)isRenderTier4;
+ (bool)isRenderTier5;
+ (bool)supportsAR;
+ (bool)supportsSceneReconstruction;
+ (bool)useSceneReconstructionMeshForOrientation;

@end
