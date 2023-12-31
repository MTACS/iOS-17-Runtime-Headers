
@interface NotificationRelay : NSObject {
    bool  _refreshManagers;
}

@property (nonatomic) bool refreshManagers;

+ (id)sharedRelay;

- (id)init;
- (bool)refreshManagers;
- (void)refreshManagersForPreferences:(bool)arg1 localNotifications:(bool)arg2;
- (void)relayFrameworkNotification:(id)arg1;
- (void)setRefreshManagers:(bool)arg1;

@end
