
@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {
    FBSScene * _activeScene;
    bool  _arePlaceholdersInitialised;
    UIScreen * _intendedScreen;
    FBSSceneLayer * _keyboardSceneLayer;
    NSDictionary * _perScreenOptions;
    bool  _resetRequired;
}

@property (nonatomic, readonly) struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; } _bindingDescription;
@property (setter=_setBoundContext:, nonatomic) CAContext *_boundContext;
@property (setter=_setContextBinder:, nonatomic) _UIContextBinder *_contextBinder;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (nonatomic, readonly) FBSSceneIdentityToken *activeSceneIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isHostedInAnotherProcess;
+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(bool)arg2;

- (void).cxx_destruct;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_alwaysGetsContexts;
- (bool)_canIgnoreInteractionEvents;
- (void)_configureAlphaIfNecessary;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (bool)_isAlwaysKeyboardWindow;
- (bool)_isEligibleForFocusOcclusion;
- (bool)_isFullscreen;
- (bool)_isHostedInAnotherProcess;
- (bool)_isRemoteKeyboardWindow;
- (bool)_isTextEffectsWindowNotificationOwner;
- (bool)_isWindowServerHostingManaged;
- (id)_layerForCoordinateSpaceConversion;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (long long)_orientationForClassicPresentation;
- (long long)_orientationInSceneSpace;
- (void)_resetScene;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5 isRotating:(bool)arg6;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_usesWindowServerHitTesting;
- (bool)_wantsSceneAssociation;
- (id)activeSceneIdentity;
- (void)attachBindable;
- (void)dealloc;
- (void)detachBindable;
- (void)endDisablingInterfaceAutorotation;
- (void)invalidate;
- (bool)isInternalWindow;
- (bool)isTransparentFocusItem;
- (void)resetScene;
- (void)setWindowLevel:(double)arg1;
- (bool)shouldAttachBindable;
- (bool)shouldDetachBindable;

@end
