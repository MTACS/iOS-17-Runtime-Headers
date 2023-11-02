
@interface MCUINavigationViewController : UINavigationController {
    id /* block */  _showViewControllerCompletionBlock;
}

@property (nonatomic, copy) id /* block */ showViewControllerCompletionBlock;

- (void).cxx_destruct;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (void)setShowViewControllerCompletionBlock:(id /* block */)arg1;
- (bool)shouldAutorotate;
- (id /* block */)showViewControllerCompletionBlock;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
