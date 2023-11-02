
@interface SYApplicationStateObserver : NSObject {
    _Atomic bool  _appStateIsActive;
    id /* block */  _becomeActiveHandler;
    bool  _needsRegisterForAppStateNotifications;
    id /* block */  _resignActiveHandler;
}

- (void).cxx_destruct;
- (void)_handleAppBecomeActive:(id)arg1;
- (void)_handleAppResignActive:(id)arg1;
- (void)_updateAppStateOnMainThread;
- (void)_updateAppStateWithCompletion:(id /* block */)arg1;
- (bool)appIsActive;
- (id)initWithBecomeActiveHandler:(id /* block */)arg1 resignActiveHandler:(id /* block */)arg2;
- (void)registerForAppStateNotifications;

@end
