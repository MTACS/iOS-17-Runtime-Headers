
@interface LAUIPearlGlyphView : UIView <LAUIMetalRenderLoopDelegate> {
    bool  _animating;
    struct unique_ptr<(anonymous namespace)::face_id_animator_t, std::default_delete<(anonymous namespace)::face_id_animator_t>>="__ptr_"{__compressed_pair<(anonymous namespace)::face_id_animator_t *, std::default_delete<(anonymous namespace)::face_id_animator_t>>="__value_"^{face_id_animator_t {}  _animator;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    bool  _changingState;
    LAUICheckmarkLayer * _checkmarkLayer;
    struct CGColorSpace { } * _colorSpace;
    struct vector<void (^)(bool), std::allocator<void (^)(bool)>>="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(bool), std::allocator<void (^)(bool)>>="__value_"^@? {}  _completionHandlers;
    struct configuration_t { 
        long long _style; 
        bool _reduce_blur; 
    }  _configuration;
    UIView * _containerView;
    CALayer * _contentLayer;
    CAShapeLayer * _contentLayerMask;
    bool  _contentLayerNeedsMaskUpdate;
    void _defaultColor;
    <LAUIPearlGlyphViewDelegate> * _delegate;
    bool  _delegateRespondsToWillRender;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableSize;
    unsigned long long  _externalAnimationCount;
    unsigned long long  _faceVisibility;
    bool  _feedbackEnabled;
    struct overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))>="overlay_value"{optional<UIColor *>=""(?="__null_state_"c"__val_"@"UIColor")"__engaged_"B {}  _finishedColor;
    struct overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))>="overlay_value"{optional<UIColor *>=""(?="__null_state_"c"__val_"@"UIColor")"__engaged_"B {}  _idleColor;
    bool  _inWindow;
    bool  _invalidated;
    double  _lastUpdateTime;
    CALayer * _layer;
    bool  _modelDirty;
    void _oscillatingColor;
    double  _overdrawRatio;
    bool  _panning;
    bool  _paused;
    long long  _priorState;
    LAUIMetalRenderLoop * _renderLoop;
    struct unique_ptr<LAUI_uniform_cubic_b_spline_renderer::renderer_t, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> { 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::renderer_t *, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> { 
            struct renderer_t {} *__value_; 
        } __ptr_; 
    }  _renderer;
    bool  _rendererPaused;
    double  _scale;
    bool  _shakeEnabled;
    LAUIPearlGlyphViewStaticResources * _sharedResources;
    long long  _state;
    bool  _stateChangeAnimated;
    unsigned long long  _stateChangeCounter;
    void _successColor;
}

@property (nonatomic, readonly) CALayer *contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAUIPearlGlyphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceVisibility;
@property (nonatomic) bool feedbackEnabled;
@property (nonatomic, readonly) UIColor *finishedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideFace;
@property (nonatomic, readonly) UIColor *idleColor;
@property (nonatomic) bool inApplicationContext;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) bool shakeEnabled;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (void)invokeSuccessFeedback;
+ (id)sharedStaticResources;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)contentLayer;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (unsigned long long)faceVisibility;
- (bool)feedbackEnabled;
- (id)finishedColor;
- (bool)hideFace;
- (id)idleColor;
- (bool)inApplicationContext;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)invalidate;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)purgeBuffers;
- (void)reduceMotionDidChange:(id)arg1;
- (void)reduceTransparencyDidChange:(id)arg1;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)renderLoop:(id)arg1 drawableSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setFaceVisibility:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setFeedbackEnabled:(bool)arg1;
- (void)setFinishedColor:(id)arg1 animated:(bool)arg2;
- (void)setHideFace:(bool)arg1 animated:(bool)arg2;
- (void)setIdleColor:(id)arg1 animated:(bool)arg2;
- (void)setInApplicationContext:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setShakeEnabled:(bool)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (bool)shakeEnabled;
- (long long)state;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
