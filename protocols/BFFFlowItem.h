
@protocol BFFFlowItem <NSObject>

@required

+ (unsigned long long)applicableDispositions;
+ (NSString *)cloudConfigSkipKey;

- (id)init;
- (void)setDelegate:(id <BFFFlowItemDelegate>)arg1;

@optional

+ (bool)controllerAffectedByTapFreeSetup;
+ (bool)controllerNeedsToRun;
+ (bool)hiddenFromMultiUser;
+ (bool)hiddenFromStoreDemoMode;
+ (bool)isTrailingWithEnvironment:(id <BYEnvironment>)arg1;
+ (void)skippedByCloudConfig;
+ (void)skippedByCloudConfigWithEnvironment:(id <BYEnvironment>)arg1;

- (unsigned long long)allowedTerminationSources;
- (void)cancelHostedPresentation;
- (bool)controllerAllowsNavigatingBack;
- (bool)controllerNeedsToRun;
- (void)controllerWasPopped;
- (void)controllerWillNotRun;
- (NSString *)displayLanguage;
- (void)flowItemDidAppear:(bool)arg1;
- (void)handleDebugGesture;
- (NSArray *)internalMenuActions;
- (bool)isEphemeral;
- (void)performExtendedInitializationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentHostedViewControllerOnNavigationController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: BFFNavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (bool)responsibleForViewController:(UIViewController *)arg1;
- (void)setNavigationController:(BFFNavigationController *)arg1;
- (bool)shouldAllowStartOver;
- (bool)shouldPresentModally;
- (bool)shouldStopInactivityTimer;
- (bool)shouldSuppressExtendedInitializationActivityIndicator;
- (void)startFlowItem:(bool)arg1;
- (void)startOver;
- (UIViewController *)viewController;

@end
