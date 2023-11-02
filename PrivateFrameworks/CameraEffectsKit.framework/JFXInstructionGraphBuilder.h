
@interface JFXInstructionGraphBuilder : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    PVColorSpace * _outputColorSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    int  _renderingIntent;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic, retain) PVColorSpace *outputColorSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) int renderingIntent;

+ (id)JFX_maskNode:(id)arg1 maskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 basisSize:(struct CGSize { double x1; double x2; })arg3;
+ (double)JFX_scaleForMediaSize:(struct CGSize { double x1; double x2; })arg1 mediaContentMode:(int)arg2 clipAspectRatio:(double)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 outputContentMode:(int)arg5;
+ (id)JFX_transformNode:(id)arg1 scale:(double)arg2;

- (void).cxx_destruct;
- (id)JFX_applyCustomRenderingPropertiesToInputNode:(id)arg1 customRendererProperties:(id)arg2 transformAnimation:(id)arg3 transformAnimationContentMode:(int)arg4 mediaScale:(double)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })JFX_calculateCompositeNodeTransformForCropWithCompositeNodeOutputSize:(struct CGSize { double x1; double x2; })arg1 mediaScale:(double)arg2;
- (id)JFX_mediaTransformAnimationForPlayableElement:(id)arg1 liveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg2;
- (id)_buildTestXFormAnimation:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 baseTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 clipNaturalSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_sourceNodeForStillMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 transformAnimation:(id)arg3 transformAnimationContentMode:(int)arg4 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (id)_sourceNodeForVideoMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 transformAnimationContentMode:(int)arg5;
- (id)applyEffectStack:(id)arg1 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toInput:(id)arg3;
- (id)applyEffectStack:(id)arg1 toInput:(id)arg2;
- (id)blendNodeForClipSourceNodes:(id)arg1;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)initWithOutputSize:(struct CGSize { double x1; double x2; })arg1 frameSize:(struct CGSize { double x1; double x2; })arg2 outputColorSpace:(id)arg3;
- (id)instructionGraphForPlayableElement:(id)arg1 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 compositionTrackID:(int)arg4 liveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg5 excludingEffectType:(int)arg6 customRendererProperties:(id)arg7;
- (id)outputColorSpace;
- (struct CGSize { double x1; double x2; })outputSize;
- (int)renderingIntent;
- (void)setOutputColorSpace:(id)arg1;
- (void)setRenderingIntent:(int)arg1;
- (id)sourceNodeForGeneratorEffect:(id)arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)sourceNodeForImageBuffer:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)sourceNodeForMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 transformAnimationContentMode:(int)arg5 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg6 mediaScale:(double)arg7 playableAspectRatio:(long long)arg8 playableAspectRatioPreservationMode:(long long)arg9;

@end
