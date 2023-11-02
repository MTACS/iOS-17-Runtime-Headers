
@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate> {
    <HUConfiguratorDelegate> * _configuratorDelegate;
    NSMutableArray * _displayedViewControllers;
}

@property (nonatomic) <HUConfiguratorDelegate> *configuratorDelegate;
@property (nonatomic, readonly) UIViewController<HUConfigurationViewController> *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addViewControllerToDisplay:(id)arg1;
- (id)_nextViewControllerForResults:(id)arg1;
- (void)_removeDisplayedViewController;
- (id)configuratorDelegate;
- (id)currentViewController;
- (id)displayedViewControllers;
- (id)initWithConfiguratorDelegate:(id)arg1 initialViewController:(id)arg2;
- (void)popViewController;
- (void)pushViewControllerForResults:(id)arg1;
- (void)setConfiguratorDelegate:(id)arg1;
- (void)viewController:(id)arg1 didFinishWithConfigurationResults:(id)arg2;
- (void)viewControllerDidGoBack:(id)arg1;
- (void)viewControllerWillAppear:(id)arg1;

@end
