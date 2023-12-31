
@interface SKUIMoreNavigationController : UIMoreNavigationController {
    UINavigationController * _displayedViewController;
    UIViewController * _firstActualViewController;
    <SKUIMoreNavigationControllerDelegate> * _storeKitDelegate;
}

@property (nonatomic) <SKUIMoreNavigationControllerDelegate> *storeKitDelegate;

+ (Class)_moreListControllerClass;

- (void).cxx_destruct;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)displayedViewController;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDisplayedViewController:(id)arg1;
- (void)setStoreKitDelegate:(id)arg1;
- (id)storeKitDelegate;
- (unsigned long long)supportedInterfaceOrientations;

@end
