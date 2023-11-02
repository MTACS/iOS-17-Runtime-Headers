
@interface _UIRootWindow : UIWindow {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _additionalRootLayerAffineTransform;
    FBSDisplayIdentity * _currentDisplayIdentity;
    double  _scale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _visibilityLock;
    bool  _visibilityLock_enabled;
    NSString * _visibilityLock_environment;
    NSString * _visibilityLock_identifier;
    bool  _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _visibilityProcessingLock;
    RBSAssertion * _visibilityProcessingLock_assertion;
    NSString * _visibilityProcessingLock_identifier;
}

@property (getter=_additionalRootLayerAffineTransform, setter=_setAdditionalRootLayerAffineTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } additionalRootLayerAffineTransform;
@property (nonatomic, readonly, copy) NSString *visibilityEnvironment;

+ (bool)_needsPassthroughInteraction;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_additionalRootLayerAffineTransform;
- (struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; })_bindingDescription;
- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3;
- (id)_context;
- (void)_didMoveFromScene:(id)arg1 toScene:(id)arg2;
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (bool)_extendsScreenSceneLifetime;
- (bool)_isWindowServerHostingManaged;
- (id)_layerForCoordinateSpaceConversion;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (void)_prepareHierarchyForWindowHostingSceneRemoval;
- (void)_setAdditionalRootLayerAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)_touchesInsideShouldHideCalloutBar;
- (bool)_transformLayerIncludesScreenRotation;
- (void)_updateVisibility;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (id)_visibilityLock_environment;
- (bool)_wantsSceneAssociation;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setVisibilityIdentifier:(id)arg1;
- (id)visibilityEnvironment;

@end
