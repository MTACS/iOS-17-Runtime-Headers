
@interface VUIAlertController : UIAlertController {
    NSMutableArray * _alertActions;
}

@property (nonatomic, retain) NSMutableArray *alertActions;

+ (id)vui_alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;

- (void).cxx_destruct;
- (id)alertActions;
- (void)setAlertActions:(id)arg1;
- (void)vui_addAction:(id)arg1;
- (void)vui_addAction:(id)arg1 isPreferred:(bool)arg2;
- (void)vui_dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)vui_presentAlertFromPresentingController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
