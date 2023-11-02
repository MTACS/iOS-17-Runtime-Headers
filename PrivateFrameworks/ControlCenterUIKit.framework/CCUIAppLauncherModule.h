
@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {
    SBFApplication * _application;
    NSString * _applicationIdentifier;
    NSBundle * _bundle;
    CCUIContentModuleContext * _contentModuleContext;
    NSString * _displayName;
    NSString * _launchApplicationIdentifier;
    NSURL * _launchURL;
    bool  _requestAuthenticationForExpandedModule;
    bool  _supportsApplicationShortcuts;
}

@property (getter=_application, nonatomic, readonly) SBFApplication *application;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (nonatomic, retain) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *iconGlyph;
@property (nonatomic, copy) NSString *launchApplicationIdentifier;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic) bool requestAuthenticationForExpandedModule;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsApplicationShortcuts;

- (void).cxx_destruct;
- (id)_application;
- (void)_fetchApplicationIfNeeded;
- (id)applicationIdentifier;
- (id)contentModuleContext;
- (id)contentViewControllerForContext:(id)arg1;
- (id)displayName;
- (void)handleTapWithTouchType:(long long)arg1;
- (void)handleTouchDownWithTouchType:(long long)arg1;
- (id)iconGlyph;
- (id)init;
- (id)launchApplicationIdentifier;
- (id)launchURL;
- (id)launchURLForTouchType:(long long)arg1;
- (bool)requestAuthenticationForExpandedModule;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setContentModuleContext:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLaunchApplicationIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setRequestAuthenticationForExpandedModule:(bool)arg1;
- (void)setSupportsApplicationShortcuts:(bool)arg1;
- (bool)supportsApplicationShortcuts;

@end
