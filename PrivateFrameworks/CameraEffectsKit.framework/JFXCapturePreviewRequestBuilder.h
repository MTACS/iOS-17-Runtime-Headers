
@interface JFXCapturePreviewRequestBuilder : NSObject {
    bool  _logged_render_request_failure_animoji;
    bool  _logged_render_request_failure_facetracking;
    PVColorSpace * _outputColorSpace;
    JFXCapturePreviewProperties * _previewProperties;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _requestTransformAnimation;
    NSObject<OS_dispatch_queue> * _selfieBGLoadQ;
}

@property (nonatomic, readonly) PVColorSpace *outputColorSpace;
@property (nonatomic, readonly) JFXCapturePreviewProperties *previewProperties;
@property (nonatomic) struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } requestTransformAnimation;

- (void).cxx_destruct;
- (id)JFX_getEffectsOfType:(id)arg1 ofType:(int)arg2;
- (id)JFX_visibleEffects:(id)arg1;
- (id)createPVRenderRequestUsingAnimojiRenderer:(id)arg1 metadataValidator:(id)arg2 additionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 effectStack:(id)arg4 animojiTapPoint:(bool)arg5 animojiUsesInterfaceOrientation:(bool)arg6 requestHandler:(id*)arg7;
- (id)initWithPreviewProperties:(id)arg1 outputColorSpace:(id)arg2;
- (id)outputColorSpace;
- (id)previewProperties;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })requestTransformAnimation;
- (void)setRequestTransformAnimation:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;

@end
