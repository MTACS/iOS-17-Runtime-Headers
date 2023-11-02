
@interface NCMutableNotificationAlertOptions : NCNotificationAlertOptions

@property (nonatomic, copy) NSUUID *activeModeUUID;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) unsigned long long suppression;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveModeUUID:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setSuppression:(unsigned long long)arg1;

@end
