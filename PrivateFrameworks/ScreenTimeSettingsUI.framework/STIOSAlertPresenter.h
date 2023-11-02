
@interface STIOSAlertPresenter : NSObject <STAlertPresenter> {
    UIViewController * _presentingViewController;
}

@property (readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)arg1;
- (id)presentingViewController;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;

@end
