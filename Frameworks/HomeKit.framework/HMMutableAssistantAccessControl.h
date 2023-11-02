
@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (copy) NSArray *accessories;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) bool activityNotificationsEnabledForPersonalRequests;
@property bool allowUnauthenticatedRequests;
@property (getter=isEnabled) bool enabled;

- (id)accessories;
- (void)addAccessory:(id)arg1;
- (bool)allowUnauthenticatedRequests;
- (bool)areActivityNotificationsEnabledForPersonalRequests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEnabled;
- (unsigned long long)options;
- (void)removeAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setActivityNotificationsEnabledForPersonalRequests:(bool)arg1;
- (void)setAllowUnauthenticatedRequests:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
