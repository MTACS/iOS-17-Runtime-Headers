
@interface PUWelcomeViewControllersManager : NSObject {
    Class  __presentedWelcomeViewControllerClass;
    UIViewController * __presentingViewController;
    NSMutableSet * __remainingWelcomeViewControllerClassesToPresent;
    NSArray * __welcomeViewControllerClasses;
}

@property (setter=_setPresentedWelcomeViewControllerClass:, nonatomic) Class _presentedWelcomeViewControllerClass;
@property (setter=_setPresentingViewController:, nonatomic, retain) UIViewController *_presentingViewController;
@property (nonatomic, readonly, copy) NSMutableSet *_remainingWelcomeViewControllerClassesToPresent;
@property (nonatomic, readonly, copy) NSArray *_welcomeViewControllerClasses;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_handleWelcomeViewControllerCompletion;
- (id)_initWithWelcomeViewControllerClasses:(id)arg1;
- (Class)_presentedWelcomeViewControllerClass;
- (id)_presentingViewController;
- (id)_remainingWelcomeViewControllerClassesToPresent;
- (void)_reset;
- (void)_setPresentedWelcomeViewControllerClass:(Class)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (void)_update;
- (id)_welcomeViewControllerClasses;
- (id)init;
- (void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)arg1;
- (void)resetAllLastPresentationInfos;

@end
