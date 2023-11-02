
@interface PKPayLaterCardView : UIView <PKInvalidatable, PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol> {
    bool  _draw;
    bool  _effectiveMotionEnabled;
    bool  _effectivePaused;
    unsigned long long  _framesToRender;
    bool  _invalidated;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _lastRotation;
    <PKPayLaterCardMagnitudesProvider> * _magnitudesProvider;
    bool  _motionEnabled;
    bool  _paused;
    PKPayLaterCardMagnitudes * _pendingMagnitudes;
    PKMetalRenderLoop * _renderLoop;
    PKPayLaterCardRenderer * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (getter=isMotionEnabled, nonatomic) bool motionEnabled;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isPresented, nonatomic) bool presented;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOverlay:(struct CGImage { }*)arg1 magnitudesProvider:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isMotionEnabled;
- (bool)isPaused;
- (bool)isPresented;
- (void)layoutSubviews;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)refreshMagnitudes;
- (void)renderLoop:(id)arg1 didChangeRunnable:(bool)arg2;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)renderLoop:(id)arg1 drawableSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)setMotionEnabled:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPresented:(bool)arg1;

@end
