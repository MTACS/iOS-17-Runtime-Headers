
@interface UIPointerInteraction : NSObject <UIInteraction, UIInteraction_Internal, _UIPointerInteractionDriverSink> {
    long long  _currentModifiers;
    UIPointerRegion * _currentRegion;
    UIPointerRegion * _defaultRegion;
    <UIPointerInteractionDelegate> * _delegate;
    struct { 
        bool regionForRequest; 
        bool styleForRegion; 
        bool willEnterRegionAnimator; 
        bool willExitRegionAnimator; 
        bool asyncRegionForRequest; 
        bool targetRegionForDeceleratingPointerWithRequests; 
    }  _delegateImplements;
    NSArray * _drivers;
    bool  _enabled;
    unsigned long long  _generationID;
    UIPointerRegion * _mostRecentRegion;
    bool  _observingPresentationNotification;
    bool  _pausesPointerUpdatesWhilePanning;
    UIView * _view;
}

@property (nonatomic) long long currentModifiers;
@property (nonatomic, copy) UIPointerRegion *currentRegion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIPointerRegion *defaultRegion;
@property (nonatomic, readonly) <UIPointerInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *drivers;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, copy) UIPointerRegion *mostRecentRegion;
@property (getter=_pausesPointerUpdatesWhilePanning, setter=_setPausesPointerUpdatesWhilePanning:, nonatomic) bool pausesPointerUpdatesWhilePanning;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_applyPointerStyle:(id)arg1 forRegion:(id)arg2 animator:(id)arg3;
- (void)_handlePresentationNotification:(id)arg1;
- (void)_modifiersDidChangeInRegion:(id)arg1 update:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2;
- (id)_notifyDelegate_willEnterRegion:(id)arg1;
- (id)_notifyDelegate_willExitRegion:(id)arg1;
- (bool)_pausesPointerUpdatesWhilePanning;
- (void)_pointerDidEnterRegion:(id)arg1 update:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2;
- (void)_pointerDidExit;
- (void)_pointerDidExitRegion:(id)arg1 willEnterNewRegion:(bool)arg2;
- (id)_pointerRegionAtPoint:(struct CGPoint { double x1; double x2; })arg1 modifiers:(long long)arg2;
- (id)_pointerStyleForRegion:(id)arg1;
- (void)_queryDelegateForRegionWithRequest:(id)arg1 completion:(id /* block */)arg2 forceSynchronous:(bool)arg3;
- (bool)_regionContainsCurrentHoverLocation:(id)arg1;
- (void)_runAlongsideAnimator:(id)arg1;
- (void)_setPausesPointerUpdatesWhilePanning:(bool)arg1;
- (bool)_supportsAssociation;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)arg1;
- (void)_updateCurrentRegionIfNecessary:(id)arg1 update:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2;
- (void)_updateDebugUIForRegionIfEnabled:(id)arg1;
- (void)_updateInteractionIsEnabled;
- (void)_updatePointerStyleForRegion:(id)arg1 update:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2 animator:(id)arg3;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (long long)currentModifiers;
- (id)currentRegion;
- (void)dealloc;
- (id)defaultRegion;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)driver:(id)arg1 didIssueUpdate:(struct { struct CAPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; long long x3; long long x4; long long x5; bool x6; })arg2;
- (void)driver:(id)arg1 willAttachHoverGestureRecognizer:(id)arg2 toView:(id)arg3;
- (void)driverDidExit:(id)arg1;
- (id)drivers;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (bool)isEnabled;
- (id)mostRecentRegion;
- (void)setCurrentModifiers:(long long)arg1;
- (void)setCurrentRegion:(id)arg1;
- (void)setDrivers:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMostRecentRegion:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
