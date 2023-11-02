
@interface NPKUserNotificationCenter : NSObject <UNUserNotificationCenterDelegatePrivate> {
    long long  _authorizationStatus;
    UNUserNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addNotificationWithNotificationIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 userInfo:(id)arg5 wantsBadgedIcon:(bool)arg6 suppressed:(bool)arg7 completion:(id /* block */)arg8;
- (void)_requestNotificationAuthorizationWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_requestNotificationAuthorizationWithPreconditionCheck:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_requestWithNotificationIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 userInfo:(id)arg5 wantsBadgedIcon:(bool)arg6 suppressed:(bool)arg7;
- (void)addNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithNotificationBundleIdentifier:(id)arg1;
- (void)requestAuthorizationIfNecessaryForPassesManager:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestAuthorizationWithCompletion:(id /* block */)arg1;
- (void)setNotificationCategoryWithIdentifier:(id)arg1 intentIdentifier:(id)arg2 actions:(id)arg3 options:(unsigned long long)arg4;
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;

@end
