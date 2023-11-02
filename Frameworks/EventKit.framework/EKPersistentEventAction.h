
@interface EKPersistentEventAction : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)externalFolderID;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalScheduleID;
- (id)owner;
- (void)setExternalFolderID:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setExternalScheduleID:(id)arg1;
- (void)setOwner:(id)arg1;

@end
