
@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate, _UIViewServiceSessionActivityProviding, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface> {
    NSArray * _allowedNotifications;
    bool  _canRestoreInputViews;
    bool  _didResignForDisappear;
    _UITouchesBeganObserverGestureRecognizer * _hostedRemoteKeyboardWindowActivityObserverGesture;
    _UITouchesBeganObserverGestureRecognizer * _hostedTEWActivityObserverGesture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hostedViewReference;
    struct CGSize { 
        double width; 
        double height; 
    }  _hostedViewSize;
    _UIHostedWindow * _hostedWindow;
    _UIAsyncInvocation * _invalidationInvocation;
    bool  _isRestoringInputViews;
    bool  _localVCDisablesAutomaticBehaviors;
    _UIAsyncInvocation * _prepareForDisconnectionInvocation;
    id  _remoteViewControllerProxy;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    _UIViewServiceSessionActivityRecord * _sessionActivityRecord;
    NSUUID * _sessionIdentifier;
    bool  _wasInvalidated;
    struct CGPoint { 
        double x; 
        double y; 
    }  _windowOrigin;
}

@property (nonatomic, readonly) unsigned long long _providerType;
@property (nonatomic, readonly) NSUUID *_sessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (bool)_shouldAddServiceOperator;
+ (void)initialize;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 sessionIdentifier:(id)arg3;

- (void).cxx_destruct;
- (void)__createHostedTextEffectsWithReplyHandler:(id /* block */)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidReceiveGestureDirection:(long long)arg1 authenticationMessage:(id)arg2;
- (void)__hostViewDidMoveToScreenWithNewHostingHandleReplyHandler:(id /* block */)arg1;
- (void)__hostViewWillAppear:(bool)arg1;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setHostedViewReference:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)__setHostedViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setRemoteTextEffectsWindowMatchesLayerWithContextId:(unsigned int)arg1 renderId:(unsigned long long)arg2;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleRemoteKeyboardActivityObserverGesture:(id)arg1;
- (void)_handleTEWActivityObserverGesture:(id)arg1;
- (void)_inputResponderReloaded:(id)arg1;
- (void)_installActivityObserverGestureIfNeeded;
- (void)_installActivityObserverGesturesInKeyboardWindowIfNeeded;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (void)_objc_initiateDealloc;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)arg1;
- (unsigned long long)_providerType;
- (id)_queue;
- (void)_reloadSafeInsets;
- (void)_removeTextEffectsWindowMatchAnimations;
- (void)_resetHostedViewSize;
- (void)_restoreInputViews;
- (void)_screenInterfaceOrientationDidChange:(id)arg1;
- (id)_sessionIdentifier;
- (void)_uninstallActivityObserverGestureIfNeeded;
- (void)_uninstallActivityObserverGesturesFromKeyboardWindowIfNeeded;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)_windowDidBecomeApplicationKey:(id)arg1;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)forceSyncToStatusBarOrientation;
- (void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2;
- (id)invalidate;
- (void)makeHostWindowKey;
- (void)performOnRelevantWindows:(id /* block */)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(bool)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
