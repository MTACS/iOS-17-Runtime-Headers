
@interface HUAnnounceNotificationSettingsItem : HFItem {
    unsigned long long  _notificationMode;
    unsigned long long  _sortOrder;
    HMUser * _user;
}

@property (nonatomic, readonly) unsigned long long notificationMode;
@property (nonatomic, readonly) unsigned long long sortOrder;
@property (nonatomic, readonly) HMUser *user;

+ (unsigned long long)sortOrderForMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_notificationModeToString:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithNotificationMode:(unsigned long long)arg1 user:(id)arg2;
- (unsigned long long)notificationMode;
- (unsigned long long)sortOrder;
- (id)user;

@end
