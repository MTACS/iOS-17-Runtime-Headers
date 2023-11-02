
@interface SBDashBoardTraitsAwareAppHostingViewController : UIViewController <CSTraitsAwareOrientedAppHosting> {
    <SBApplicationHosting> * _appHosting;
    SBTraitsOrientedContentViewController * _orientedContentViewController;
    UIWindow * _targetWindow;
    TRAParticipant * _traitsParticipant;
    SBTraitsSceneParticipantDelegate * _traitsParticipantDelegate;
}

@property (nonatomic) <SBApplicationHosting> *appHosting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBTraitsOrientedContentViewController *orientedContentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *targetWindow;
@property (nonatomic, retain) TRAParticipant *traitsParticipant;
@property (nonatomic, retain) SBTraitsSceneParticipantDelegate *traitsParticipantDelegate;

- (void).cxx_destruct;
- (void)_acquireTraitsParticipantIfNeeded;
- (id)_effectiveWindow;
- (id)_hostedAppViewController;
- (id)_hostedSceneHandle;
- (void)_invalidateTraitsParticipant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBoundsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_traitsArbiter;
- (void)_updateWindowLevel;
- (id)appHosting;
- (id)hostedSceneHandle;
- (id)initWithAppHosting:(id)arg1 targetWindow:(id)arg2;
- (id)orientedContentViewController;
- (void)sceneDidAttach;
- (void)sceneWasDestroyed;
- (void)setAppHosting:(id)arg1;
- (void)setContentViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientedContentViewController:(id)arg1;
- (void)setTargetWindow:(id)arg1;
- (void)setTraitsParticipant:(id)arg1;
- (void)setTraitsParticipantDelegate:(id)arg1;
- (id)targetWindow;
- (id)traitsParticipant;
- (id)traitsParticipantDelegate;
- (void)viewWillAppear:(bool)arg1;

@end
