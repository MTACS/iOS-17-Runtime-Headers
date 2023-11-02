
@interface JFXEffectsPreviewGenerationRequest : NSObject {
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
    }  _animationTransformInfo;
    unsigned int  _childCode;
    NSDictionary * _customRenderingProperties;
    NSArray * _effectStack;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    JFXEffect * _generatorEffect;
    bool  _highQuality;
    PVImageBuffer * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    unsigned int  _parentCode;
    NSArray * _pickerPreviewEffectList;
    int  _priority;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    bool  _scaleAnimationTransformInfoToOutputSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _userSourceTransform;
}

@property (nonatomic) struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } animationTransformInfo;
@property (nonatomic) unsigned int childCode;
@property (nonatomic, copy) NSDictionary *customRenderingProperties;
@property (nonatomic, readonly) NSArray *effectStack;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic, readonly) JFXEffect *generatorEffect;
@property (nonatomic) bool highQuality;
@property (nonatomic, readonly) PVImageBuffer *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic, retain) NSArray *pickerPreviewEffectList;
@property (nonatomic) int priority;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic) bool scaleAnimationTransformInfoToOutputSize;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } userSourceTransform;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })JT_centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 aspectRatio:(double)arg2;
+ (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })centerAnimationInfoForOutputSize:(struct CGSize { double x1; double x2; })arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })JFX_scaleToFitSize:(struct CGSize { double x1; double x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_scaleAndTransformToFitSize:(struct CGSize { double x1; double x2; })arg1;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })animationTransformInfo;
- (void)centerAnimationInfo;
- (unsigned int)childCode;
- (id)customRenderingProperties;
- (id)effectStack;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)generatorEffect;
- (id)generatorJobWithGraphBuilder:(id)arg1;
- (bool)highQuality;
- (id)image;
- (id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 frameSize:(struct CGSize { double x1; double x2; })arg4 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 frameSize:(struct CGSize { double x1; double x2; })arg4 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct CGSize { double x1; double x2; })outputSize;
- (unsigned int)parentCode;
- (id)pickerPreviewEffectList;
- (id)placeholderGeneratorBackground;
- (int)priority;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (bool)scaleAnimationTransformInfoToOutputSize;
- (void)setAnimationTransformInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;
- (void)setChildCode:(unsigned int)arg1;
- (void)setCustomRenderingProperties:(id)arg1;
- (void)setHighQuality:(bool)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPickerPreviewEffectList:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setScaleAnimationTransformInfoToOutputSize:(bool)arg1;
- (void)setTransformAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1 scaleToOutput:(bool)arg2;
- (void)setUserSourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)sourceIGNodeUsingGraphBuilder:(id)arg1 includeAnimoji:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })userSourceTransform;

@end
