
@protocol VUIControllerPresenter <NSObject>

@required

- (void)dismissViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)dismissViewControllerWithID:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleAccountSettingsEventWithUrl:(NSURL *)arg1 amsBagKey:(NSString *)arg2 useAMSWebView:(bool)arg3;
- (void)presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 actions:(NSArray *)arg3 animated:(bool)arg4;
- (void)presentRouterDataSource:(VUIRouterDataSource *)arg1;
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentViewController:(void *)arg1 modalPresentationStyle:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: UIViewController *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)setVui_requiresLegacyPresentation:(bool)arg1;
- (bool)vui_requiresLegacyPresentation;

@end
