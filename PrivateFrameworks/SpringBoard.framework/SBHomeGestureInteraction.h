
@interface SBHomeGestureInteraction : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    <SBHomeGestureInteractionDelegate> * _delegate;
    bool  _enabled;
    SBSystemGestureManager * _gestureManager;
    SBIndirectPanGestureRecognizer * _indirectPanGestureRecognizer;
    long long  _recognizedGestureType;
    SBHomeGesturePanGestureRecognizer * _screenEdgePanGestureRecognizer;
    SBFluidScrunchGestureRecognizer * _scrunchGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeGestureInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) SBSystemGestureManager *gestureManager;
@property (nonatomic, readonly) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIndirectPanGestureRecognizer *indirectPanGestureRecognizer;
@property (nonatomic, readonly) double indirectScreenEdgeGestureRecognitionDistance;
@property (nonatomic, readonly) UIGestureRecognizer *recognizedGestureRecognizer;
@property (nonatomic) long long recognizedGestureType;
@property (nonatomic, retain) SBHomeGesturePanGestureRecognizer *screenEdgePanGestureRecognizer;
@property (nonatomic, retain) SBFluidScrunchGestureRecognizer *scrunchGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureGestureRecognizers;
- (void)_configureIndirectPanGestureRecognizer;
- (void)_configureScreenEdgePanGestureRecognizer;
- (void)_configureScrunchGestureRecognizer;
- (void)_handleGestureRecognizer:(id)arg1;
- (bool)_isGestureRunning:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)gestureManager;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForType:(long long)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (id)indirectPanGestureRecognizer;
- (double)indirectScreenEdgeGestureRecognitionDistance;
- (id)initWithSystemGestureManager:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)isEnabled;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)recognizedGestureRecognizer;
- (long long)recognizedGestureType;
- (id)screenEdgePanGestureRecognizer;
- (id)scrunchGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureManager:(id)arg1;
- (void)setIndirectPanGestureRecognizer:(id)arg1;
- (void)setRecognizedGestureType:(long long)arg1;
- (void)setScreenEdgePanGestureRecognizer:(id)arg1;
- (void)setScrunchGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (long long)typeOfGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
