
@interface _SBSUICFUserNotificationContentHostViewController : _UIRemoteViewController <_SBSUICFUserNotificationContentExtensionHostInterface> {
    SBUserNotificationAlert * _userNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBUserNotificationAlert *userNotification;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)configureWithCompletion:(id /* block */)arg1;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (void)setUserNotification:(id)arg1;
- (id)userNotification;

@end
