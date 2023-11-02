
@interface _DDUINotificationManager : NSObject <_DDUINotificationPresenterDelegate> {
    <_DDUINotificationPresenter> * _notificationPresenter;
}

@property (nonatomic, retain) <_DDUINotificationPresenter> *notificationPresenter;

- (void).cxx_destruct;
- (void)cancelMessageWithID:(id)arg1;
- (void)deepLinkToAppStoreForApplication:(id)arg1;
- (void)handleApplicationInfo:(id)arg1 withID:(id)arg2 fromDevice:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleContinuityCameraConfirmationWithID:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)notificationPresenter;
- (void)setNotificationPresenter:(id)arg1;

@end
