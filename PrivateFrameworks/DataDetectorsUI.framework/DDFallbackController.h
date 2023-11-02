
@interface DDFallbackController : UIViewController {
    UIWindow * _baseWindow;
    id  _interactionDelegate;
    UIWindow * _ourWindow;
}

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)shouldAutorotate;

@end
