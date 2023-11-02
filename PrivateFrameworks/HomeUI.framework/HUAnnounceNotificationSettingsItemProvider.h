
@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _items;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_notificationModes;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setHome:(id)arg1;
- (id)user;

@end
