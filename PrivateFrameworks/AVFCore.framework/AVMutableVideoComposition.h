
@interface AVMutableVideoComposition : AVVideoComposition {
    AVMutableVideoCompositionInternal * _mutableVideoComposition;
}

@property (nonatomic, copy) NSArray *_sourceSampleDataTrackIDs;
@property (nonatomic, retain) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, retain) Class customVideoCompositorClass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, copy) NSArray *instructions;
@property (nonatomic) float renderScale;
@property (nonatomic) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic, copy) NSArray *sourceSampleDataTrackIDs;
@property (nonatomic) int sourceTrackIDForFrameTiming;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)videoComposition;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(id /* block */)arg2;
+ (void)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (void)videoCompositionWithPropertiesOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2;
+ (void)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;

- (id)animationTool;
- (id)builtInCompositorName;
- (id)colorPrimaries;
- (id)colorTransferFunction;
- (id)colorYCbCrMatrix;
- (Class)customVideoCompositorClass;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)instructions;
- (id)perFrameHDRDisplayMetadataPolicy;
- (float)renderScale;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setAnimationTool:(id)arg1;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setColorTransferFunction:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstructions:(id)arg1;
- (void)setPerFrameHDRDisplayMetadataPolicy:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceSampleDataTrackIDs:(id)arg1;
- (void)setSourceTrackIDForFrameTiming:(int)arg1;
- (id)sourceSampleDataTrackIDs;
- (int)sourceTrackIDForFrameTiming;

// Image: /usr/lib/swift/libswiftAVFoundation.dylib

- (id)_sourceSampleDataTrackIDs;
- (void)set_sourceSampleDataTrackIDs:(id)arg1;

@end
