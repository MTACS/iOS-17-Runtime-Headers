
@interface _UIKeyShortcutHUDServer : NSObject <_UIKeyShortcutHUDKeyListenerDelegate, _UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIOServiceConnectionObserver> {
    struct { 
        unsigned int isPresentingHUD : 1; 
        unsigned int isDismissingHUD : 1; 
        unsigned int hasPresentationObserversRegistered : 1; 
    }  _flags;
    _UIKeyShortcutHUDWindow * _hudWindow;
    UIPhysicalKeyboardEvent * _lastKeyboardEvent;
    bool  _modifierKeyDownForHUDDismissal;
    _UIKeyShortcutHUDModifierKeyListener * _modifierKeyListener;
    _UIKeyShortcutHUDServerSession * _session;
    <BSInvalidatable> * _systemKeyCommandOverlayRulesToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hudPresentationState;
@property (nonatomic, readonly) _UIKeyShortcutHUDViewController *hudVC;
@property (nonatomic, retain) _UIKeyShortcutHUDWindow *hudWindow;
@property (nonatomic, retain) UIPhysicalKeyboardEvent *lastKeyboardEvent;
@property (getter=isModifierKeyDownForHUDDismissal, nonatomic) bool modifierKeyDownForHUDDismissal;
@property (nonatomic, readonly) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener;
@property (nonatomic, retain) _UIKeyShortcutHUDServerSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *systemKeyCommandOverlayRulesToken;

+ (id)sharedHUDServer;

- (void).cxx_destruct;
- (void)_addPresentationObserversIfNeeded;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_dismissHUD;
- (void)_dismissHUDWithSelectedShortcut:(id)arg1;
- (void)_hardwareKeyboardAvailabilityChanged:(id)arg1;
- (void)_removePresentationObserversIfNeeded;
- (void)_sendResponse:(id)arg1 withSession:(id)arg2;
- (void)dismissHUDForConnection:(id)arg1;
- (void)handleKeyboardEvent:(id)arg1;
- (long long)hudPresentationState;
- (id)hudVC;
- (id)hudWindow;
- (id)init;
- (bool)isModifierKeyDownForHUDDismissal;
- (void)keyShortcutHUDViewController:(id)arg1 didSelectShortcut:(id)arg2;
- (void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(id)arg1;
- (void)keyShortcutHUDViewControllerDidRequestDismissal:(id)arg1;
- (void)keyShortcutHUDWindowDidResignKey:(id)arg1;
- (void)keyShortcutHUDWindowSceneDidResignKeyboardFocus:(id)arg1;
- (id)lastKeyboardEvent;
- (id)modifierKeyListener;
- (void)modifierKeyListener:(id)arg1 didUpdateModifierFlag:(long long)arg2;
- (void)modifierKeyListenerDidPressNonModifierKey:(id)arg1;
- (void)presentHUDWithConfiguration:(id)arg1 inWindowScene:(id)arg2 forConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)serviceConnectionDidInvalidate:(id)arg1;
- (id)session;
- (void)setHudWindow:(id)arg1;
- (void)setLastKeyboardEvent:(id)arg1;
- (void)setModifierKeyDownForHUDDismissal:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSystemKeyCommandOverlayRulesToken:(id)arg1;
- (id)systemKeyCommandOverlayRulesToken;

@end
