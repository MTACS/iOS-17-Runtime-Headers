
@interface UINotificationSettingsAction : BSAction {
    UNNotification * _notification;
}

@property (nonatomic, readonly, copy) UNNotification *notification;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)initWithNotification:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
