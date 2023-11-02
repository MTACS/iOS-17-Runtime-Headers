
@interface SSScreenshotsWindow : UIWindow <SSActiveInterfaceOrientationObserverDelegate, SSDittoHostViewControllerDelegate> {
    SSActiveInterfaceOrientationObserver * _activeInterfaceOrientationObserver;
    int  _backlightNotificationToken;
    <SSScreenshotsWindowDelegate> * _delegate;
    long long  _lastActiveInterfaceOrientation;
    int  _lockNotificationToken;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    SSScreenshotsWindowRootViewController * _root;
}

@property (nonatomic) <SSScreenshotsWindowDelegate> *delegate;

+ (bool)_isSecure;

- (void).cxx_destruct;
- (bool)_canBecomeKeyWindow;
- (void)_deviceBacklightChanged:(unsigned long long)arg1;
- (void)_deviceLockStateChanged:(unsigned long long)arg1;
- (void)_dismiss;
- (id)_hostViewControllerIfExists;
- (void)_prepareRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldControlAutorotation;
- (void)activateRemoteViewControllerIfAppropriate;
- (void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3;
- (void)dealloc;
- (id)delegate;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)init;
- (void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
