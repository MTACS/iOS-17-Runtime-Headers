
@interface _UIVisibilityPropagationView : UIView {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _visibilityLock;
    bool  _visibilityLock_enabled;
    NSString * _visibilityLock_sourceEnvironment;
    RBSTarget * _visibilityLock_target;
    bool  _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _visibilityProcessingLock;
    BSServiceConnectionEndpointInjector * _visibilityProcessingLock_endpointInjector;
    NSString * _visibilityProcessingLock_sourceEnvironment;
    RBSTarget * _visibilityProcessingLock_target;
    NSMutableArray * _windowChangeNotifications;
}

@property (getter=isVisibilityPropagationEnabled, nonatomic) bool visibilityPropagationEnabled;

- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (void)_visibilityLock_setSource:(id)arg1;
- (void)_visibilityLock_updateVisibility;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVisibilityPropagationEnabled;
- (void)setHidden:(bool)arg1;
- (void)setVisibilityPropagationEnabled:(bool)arg1;
- (void)setVisibilityTarget:(id)arg1;

@end
