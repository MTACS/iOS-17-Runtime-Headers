
@protocol _DDUINotificationPresenter

@required

- (<_DDUINotificationPresenterDelegate> *)delegate;
- (void)dismissNotificationWithIdentifier:(NSUUID *)arg1;
- (void)setDelegate:(id <_DDUINotificationPresenterDelegate>)arg1;
- (void)showContinuityCameraConfirmation:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <DDUIDevice> *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showNotificationForApplication:(void *)arg1 deviceName:(void *)arg2 identifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: DDUIApplicationInfo *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
