
@interface WLKNotificationCenter : NSObject {
    <WLKNotificationCenterDelegate> * _delegate;
    <WLKNotificationsImpl> * _impl;
}

@property (nonatomic) <WLKNotificationCenterDelegate> *delegate;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (bool)isCategoryBadgeSettingEnabledByUser:(long long)arg1;
- (bool)isCategoryEnabledByUser:(long long)arg1;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
