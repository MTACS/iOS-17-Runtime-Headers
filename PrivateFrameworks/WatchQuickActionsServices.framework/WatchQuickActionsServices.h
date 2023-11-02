
@interface WatchQuickActionsServices : NSObject <AXUIClientDelegate, BLSBacklightStateObserving, WQAHostLifecycleObserver, WQAOverlayDataSource> {
    <AXUIService> * _localService;
    NSHashTable * _lock_quickActionHolders;
    WQAOverlayCoordinator * _overlayCoordinator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _quickActionHolderLock;
    AXUIClient * _serverClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AXUIService> *localService;
@property (nonatomic, readonly) WQAOverlayCoordinator *overlayCoordinator;
@property (nonatomic, readonly) AXUIClient *serverClient;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleAppDidBecomeActiveNotification;
- (void)_handleAppDidEnterBackgroundNotification;
- (void)_handleFocusRingVisibilityChanged;
- (void)_handleWatchQuickActionsEnabledDidChangeNotification;
- (id)_init;
- (void)_local_removeQuickActionsWithIdentifiers:(id)arg1;
- (void)_performBlockAccessingQuickActionHolders:(id /* block */)arg1;
- (id)_retrieveQuickActionForIdentifier:(id)arg1;
- (void)_sendAsyncMessageToServer:(id)arg1 withIdentifier:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)_sendMessageToServer:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (id)_sendMessageToServer:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_shouldObserveBacklightServicesForAppStateChange;
- (void)_tearDownServiceIfActive;
- (void)animateInstructionalBannerWithScaleFactor:(struct CGPoint { double x1; double x2; })arg1 interstepDuration:(double)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (void)clearQuickActions;
- (void)clearQuickActionsWithCompletion:(id /* block */)arg1;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)hideInstructionalBanner;
- (id)localService;
- (id)overlayCoordinator;
- (void)quickActionHostInvalidated:(id)arg1;
- (id)quickActionsForOverlayCoordinator:(id)arg1;
- (void)registerQuickActions:(id)arg1;
- (void)registerQuickActions:(id)arg1 startupCallback:(id /* block */)arg2;
- (void)requestCrownPress;
- (void)requestCrownPressWithCompletionHandler:(id /* block */)arg1;
- (void)requestFeedbackForQuickActionType:(long long)arg1;
- (void)requestStartScrollWithDirection:(long long)arg1;
- (void)requestStopScroll;
- (id)serverClient;
- (bool)shouldUseLocalServiceBundle;
- (void)showInstructionalBannerWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)unregisterQuickActionIdentifiers:(id)arg1 startupCallback:(id /* block */)arg2;
- (void)unregisterQuickActions:(id)arg1;
- (void)unregisterQuickActions:(id)arg1 startupCallback:(id /* block */)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
