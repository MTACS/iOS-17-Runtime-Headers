
@interface MCAlertController : UIAlertController {
    UIWindow * _alertWindow;
    id /* block */  _viewDidDisappearHandler;
    id /* block */  _viewWillAppearHandler;
}

@property (nonatomic, retain) UIWindow *alertWindow;
@property (nonatomic, copy) id /* block */ viewDidDisappearHandler;
@property (nonatomic, copy) id /* block */ viewWillAppearHandler;

- (id)alertWindow;
- (void)dealloc;
- (void)dismiss;
- (void)setAlertWindow:(id)arg1;
- (void)setViewDidDisappearHandler:(id /* block */)arg1;
- (void)setViewWillAppearHandler:(id /* block */)arg1;
- (void)show;
- (void)viewDidDisappear:(bool)arg1;
- (id /* block */)viewDidDisappearHandler;
- (void)viewWillAppear:(bool)arg1;
- (id /* block */)viewWillAppearHandler;

@end
