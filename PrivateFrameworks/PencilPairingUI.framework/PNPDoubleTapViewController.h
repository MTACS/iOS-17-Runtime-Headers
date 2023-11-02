
@interface PNPDoubleTapViewController : PNPWelcomeController <PNPPencilInteractionEventDestination, PNPWizardScratchpadViewDelegate, UIPencilInteractionDelegate> {
    bool  _animationsCancelled;
    UIPencilInteraction * _pencilInteraction;
    PNPPencilView * _pencilView;
    PNPQuickSwapEventSource * _quickSwapEventSource;
    PNPWizardScratchpadView * _scratchPadView;
}

@property (nonatomic) bool animationsCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPencilInteraction *pencilInteraction;
@property (nonatomic, retain) PNPPencilView *pencilView;
@property (nonatomic, retain) PNPQuickSwapEventSource *quickSwapEventSource;
@property (nonatomic, retain) PNPWizardScratchpadView *scratchPadView;
@property (readonly) Class superclass;

+ (id)_controllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (bool)animationsCancelled;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(id /* block */)arg2;
- (id)pencilInteraction;
- (void)pencilInteractionDidTap:(id)arg1;
- (id)pencilView;
- (id)quickSwapEventSource;
- (id)scratchPadView;
- (void)scratchPadViewHadInteractionEvent:(id)arg1;
- (bool)scratchPadViewIsPlayingAnimation:(id)arg1;
- (void)setAnimationsCancelled:(bool)arg1;
- (void)setPencilInteraction:(id)arg1;
- (void)setPencilView:(id)arg1;
- (void)setQuickSwapEventSource:(id)arg1;
- (void)setScratchPadView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
