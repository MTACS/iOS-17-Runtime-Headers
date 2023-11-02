
@interface OBNavigationController : UINavigationController {
    unsigned long long  _supportedInterfaceOrientations;
}

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setViewControllers:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
