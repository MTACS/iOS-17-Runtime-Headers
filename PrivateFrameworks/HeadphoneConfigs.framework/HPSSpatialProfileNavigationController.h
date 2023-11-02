
@interface HPSSpatialProfileNavigationController : UINavigationController <HPSSpatialProfileManagerViewController> {
    id /* block */  dismissalHandler;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;

- (void).cxx_destruct;
- (id /* block */)dismissalHandler;
- (void)setDismissalHandler:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;

@end
