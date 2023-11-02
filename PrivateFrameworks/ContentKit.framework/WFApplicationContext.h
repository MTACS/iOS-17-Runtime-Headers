
@interface WFApplicationContext : NSObject {
    NSBundle * _applicationBundle;
    NSMutableDictionary * _applicationStateObserversByEvent;
    bool  _canLoadShortcutsDatabase;
    bool  _canLoadShortcutsDatabaseEntitlementChecked;
    bool  _inBackground;
    bool  _inactive;
    NSLock * _observersLock;
    <WFApplicationContextProvider> * _provider;
}

@property (nonatomic, readonly) NSBundle *applicationBundle;
@property (nonatomic, readonly) NSArray *applicationBundleURLSchemes;
@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, retain) NSMutableDictionary *applicationStateObserversByEvent;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) bool canLoadShortcutsDatabase;
@property (nonatomic) bool canLoadShortcutsDatabaseEntitlementChecked;
@property (nonatomic, readonly) NSString *currentUserInterfaceType;
@property (getter=isIdleTimerDisabled, nonatomic) bool idleTimerDisabled;
@property (nonatomic) bool inBackground;
@property (nonatomic) bool inactive;
@property (nonatomic, readonly) NSLock *observersLock;
@property (nonatomic, retain) <WFApplicationContextProvider> *provider;
@property (nonatomic, readonly) bool shouldReverseLayoutDirection;
@property (nonatomic, readonly) long long userInterfaceStyle;

+ (id)sharedContext;

- (void).cxx_destruct;
- (void)_openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (id)applicationBundle;
- (id)applicationBundleURLSchemes;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)applicationOrNil;
- (long long)applicationState;
- (id)applicationStateObserversByEvent;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (id)bundle;
- (bool)canLoadShortcutsDatabase;
- (bool)canLoadShortcutsDatabaseEntitlementChecked;
- (bool)canOpenURL:(id)arg1;
- (id)currentUserInterfaceType;
- (void)dealloc;
- (void)handleApplicationStateEvent:(long long)arg1;
- (bool)inBackground;
- (bool)inactive;
- (id)init;
- (bool)isIdleTimerDisabled;
- (id)keyWindow;
- (id)observersLock;
- (void)openURL:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)provider;
- (void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)setApplicationStateObserversByEvent:(id)arg1;
- (void)setCanLoadShortcutsDatabaseEntitlementChecked:(bool)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setInBackground:(bool)arg1;
- (void)setInactive:(bool)arg1;
- (void)setProvider:(id)arg1;
- (bool)shouldReverseLayoutDirection;
- (void)suspend;
- (long long)userInterfaceStyle;

@end
