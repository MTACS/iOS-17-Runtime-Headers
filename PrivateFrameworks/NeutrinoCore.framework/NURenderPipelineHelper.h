
@interface NURenderPipelineHelper : NSObject {
    NURenderPipelineState * _pipelineState;
}

@property (nonatomic, readonly) NURenderPipelineState *pipelineState;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void).cxx_destruct;
- (id)addTagWithName:(id)arg1 inputNode:(id)arg2 error:(out id*)arg3;
- (id)auxiliaryImageFromComposition:(id)arg1 type:(id)arg2 mediaComponentType:(id)arg3 error:(out id*)arg4;
- (id)auxiliaryImageNode:(id)arg1 type:(long long)arg2;
- (id)beginGroupWithName:(id)arg1 error:(out id*)arg2;
- (id)cacheNode:(id)arg1 type:(id)arg2 settings:(id)arg3 error:(out id*)arg4;
- (id)createSloMoWithInput:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 rate:(float)arg4 error:(out id*)arg5;
- (id)cropNode:(id)arg1 cropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 cropSettings:(id)arg3;
- (bool)endGroupWithName:(id)arg1 error:(out id*)arg2;
- (id)filterNode:(id)arg1 input:(id)arg2 settings:(id)arg3;
- (id)filterNode:(id)arg1 inputs:(id)arg2 settings:(id)arg3;
- (id)getTagWithPath:(id)arg1 error:(out id*)arg2;
- (bool)hasStaticTime;
- (id)initWithPipelineState:(id)arg1;
- (id)inputForPath:(id)arg1 error:(out id*)arg2;
- (bool)isCIFilterAvailable:(id)arg1 propertyName:(id)arg2;
- (bool)isSourceAvailable:(id)arg1 sourceSettings:(id)arg2;
- (id)livePhotoKeyFrameMetadataFromNode:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(out id*)arg3;
- (long long)mediaTypeForComposition:(id)arg1;
- (long long)orientationFromAdjustmentIn:(id)arg1;
- (id)orientedNode:(id)arg1 withOrientation:(long long)arg2;
- (id)perspectiveTransformWithPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)pipelineState;
- (id)renderNodeFromSource:(id)arg1 settings:(id)arg2 error:(out id*)arg3;
- (void)resetTag:(id)arg1 input:(id)arg2;
- (bool)resetTag:(id)arg1 input:(id)arg2 error:(out id*)arg3;
- (id)scaleNode:(id)arg1 scale:(struct { long long x1; long long x2; })arg2 error:(out id*)arg3;
- (id)sourceFromComposition:(id)arg1 error:(out id*)arg2;
- (id)sourceFromComposition:(id)arg1 withName:(id)arg2 error:(out id*)arg3;
- (id)straightenTransformWithAngle:(double)arg1 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)switchFromNodes:(id)arg1 mainInput:(id)arg2 selector:(id /* block */)arg3;
- (id)trimInput:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
- (id)vectorWithFloats:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

- (id)debugNodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(bool)arg2 settingsAndInputs:(id)arg3;
- (id)nodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(bool)arg2 settingsAndInputs:(id)arg3;
- (id)performApertureRedeyeOnImage:(id)arg1 useHDRFilter:(bool)arg2 redEyeAdjustment:(id)arg3;
- (id)performLongExposureFusionForComposition:(id)arg1 longExposureImage:(id)arg2 useHDRFilter:(bool)arg3 error:(out id*)arg4;
- (id)performRedeyeOnImage:(id)arg1 useHDRFilter:(bool)arg2 redEyeAdjustment:(id)arg3;
- (id)portraitVideo:(id)arg1 disparityInput:(id)arg2 disparityKeyframes:(id)arg3 apertureKeyframes:(id)arg4 debugMode:(long long)arg5 error:(out id*)arg6;
- (id)portraitVideoDebugDetectedObjects:(id)arg1 source:(id)arg2 cinematographyState:(id)arg3 monochrome:(bool)arg4 error:(out id*)arg5;
- (id)remapPortraitV2Strength:(id)arg1 portraitEffectKind:(id)arg2;
- (long long)versionForPortraitEffect:(id)arg1;
- (id)videoCrossfadeLoop:(id)arg1 crossfadeAdjustment:(id)arg2 error:(out id*)arg3;
- (id)videoReframe:(id)arg1 reframes:(id)arg2 error:(out id*)arg3;

@end
