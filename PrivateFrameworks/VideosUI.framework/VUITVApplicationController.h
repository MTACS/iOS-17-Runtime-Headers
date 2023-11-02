
@interface VUITVApplicationController : NSObject <VUIAppContextDelegate> {
    VUIAppContext * _appContext;
    UIViewController<VUITVAppRootViewController> * _appRootViewController;
    _VUICoreApplication * _application;
    VUITVApplicationControllerContext * _context;
    <VUITVApplicationControllerDelegate> * _delegate;
    bool  _doLaunchOpenURLHandling;
    long long  _interfaceOrientation;
    <UITraitEnvironment> * _keyTraitEnvironment;
    NSDictionary * _launchOpenURLOptions;
    NSDictionary * _openURLReloadOptions;
    NSDictionary * _openURLResumeOptions;
    bool  _popViewControllerOnBackground;
    bool  _reloadInProgress;
    bool  _reloadOnResume;
    NSDate * _reloadOnResumeBackgroundedDate;
    double  _reloadOnResumeMinInterval;
    bool  _suspended;
    UIWindow * _window;
}

@property (nonatomic, readonly) VUIAppContext *appContext;
@property (nonatomic, readonly) VUITVApplicationControllerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VUITVApplicationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITraitEnvironment> *keyTraitEnvironment;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *window;

+ (id)_jsLaunchOptionsWithApplicationOptions:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_currentNavigationController;
- (bool)_hasReloadOnResumeMinIntervalPassed;
- (void)_launchApp;
- (void)_openURLControllerDidDisplay:(id)arg1;
- (void)_openURLControllerHandler:(bool)arg1;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1;
- (void)_reloadControllerDidDisplay:(id)arg1;
- (id)_rootViewController;
- (bool)_shouldReloadOnResume;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (id)appContext;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (void)appContext:(id)arg1 scriptForURL:(id)arg2 cachePolicy:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)appRootViewController;
- (void)applicationDidResume:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)evaluateInJavaScriptContext:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3;
- (id)keyTraitEnvironment;
- (id)navigationController;
- (bool)openURL:(id)arg1 options:(id)arg2;
- (void)registerForApplicationNotifications;
- (void)reload;
- (id)rootViewController;
- (void)setKeyTraitEnvironment:(id)arg1;
- (void)stop;
- (id)window;

@end
