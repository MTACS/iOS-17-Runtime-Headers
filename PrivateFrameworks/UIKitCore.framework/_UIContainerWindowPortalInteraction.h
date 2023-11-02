
@interface _UIContainerWindowPortalInteraction : NSObject <UIInteraction, UIInteraction_Internal> {
    bool  _attemptsToUseAncestorViewContainer;
    bool  _enabled;
    _UIContainerWindowPortalView * _portalView;
    bool  _portalViewEnabled;
    UIView * _view;
}

@property (setter=_setPortalViewEnabled:, nonatomic) bool _portalViewEnabled;
@property (nonatomic) bool attemptsToUseAncestorViewContainer;
@property (nonatomic, readonly) UIWindow *containerWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) _UIContainerWindowPortalView *portalView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (bool)_portalViewEnabled;
- (void)_setPortalViewEnabled:(bool)arg1;
- (bool)_viewIsVisibleInContainer:(id)arg1;
- (void)_viewVisibilityDidChange;
- (id)_visibleViewContainer;
- (bool)attemptsToUseAncestorViewContainer;
- (id)containerWindow;
- (void)didMoveToView:(id)arg1;
- (void)ensureVisibilityInContainerWindow;
- (bool)isEnabled;
- (id)portalView;
- (void)setAttemptsToUseAncestorViewContainer:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPortalView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
