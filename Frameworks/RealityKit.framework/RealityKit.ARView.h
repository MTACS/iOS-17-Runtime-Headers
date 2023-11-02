
@interface RealityKit.ARView : UIView <ARSessionProviding, UIGestureRecognizerDelegate> {
    void __delegatePrivate;
    void __disableComposition;
    void __disableCounterRotation;
    void __disableStatisticsRendering;
    void __enableAutomaticFrameRate;
    void __environmentEntity;
    void __forceLocalizedProbes;
    void __nonARKitDevices;
    void __parallaxBackgroundProbe;
    void __preferredFrameRate;
    void __renderGraphEmitter;
    void __statisticsOptions;
    void _scene;
    void arSystem;
    void backingLayer;
    void currentIBL;
    void enablePresentsWithTransaction;
    void engineStartedByThisView;
    void engineWasRunningWhenLastInTheForeground;
    void environment;
    void initialized;
    void interfaceOrientation;
    void lastInterfaceOrientation;
    void layerHandle;
    void pauseEngineOnLeaveForeground;
    void presentsWithTransactionFrames;
    void realityFusionSession;
    void renderSubscription;
    void renderView;
    void sessionComponents;
    void singleTapGesture;
    void updateAfterCounterRotation;
    void updateSubscription;
    void useCAMetalLayer;
    void viewCounterRotating;
}

@property (nonatomic) double contentScaleFactor;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property (nonatomic, readonly) CALayer *renderLayer;
@property (nonatomic, retain) ARSession *session;

+ (Class)layerClass;

- (void).cxx_destruct;
- (double)contentScaleFactor;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (float)distanceInMetersFromEntityAccessibilityWrapper:(id)arg1;
- (id)entityAccessibilityWrappers;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleRotation:(id)arg1;
- (void)handleScale:(id)arg1;
- (void)handleSingleTapWithRecognizer:(id)arg1;
- (bool)handleTapForEntityAccessibilityWrapper:(id)arg1;
- (void)handleTranslation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)renderLayer;
- (void)restartEngineWithNotification:(id)arg1;
- (id)session;
- (void)setContentScaleFactor:(double)arg1;
- (void)setSession:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willResignActiveWithNotification:(id)arg1;
- (void)windowDidRotateWithNotification:(id)arg1;
- (void)windowWillAnimateRotationWithNotification:(id)arg1;
- (void)windowWillRotateWithNotification:(id)arg1;

@end
