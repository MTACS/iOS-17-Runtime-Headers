
@interface PRUIForwardExtensionAppearanceNotificationAction : BSAction

@property (nonatomic, readonly, copy) NSString *notificationName;

- (id)initWithNotificationName:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notificationName;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
