
@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)UUID;
- (id)calendar;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (id)hostURL;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setUUID:(id)arg1;

@end
