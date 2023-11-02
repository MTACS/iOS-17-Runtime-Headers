
@interface REMSmartListSectionStorage : REMBaseSectionStorage

@property (nonatomic, retain) REMObjectID *smartListID;

+ (id)cdEntityName;

- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 smartListID:(id)arg3 displayName:(id)arg4;
- (void)setSmartListID:(id)arg1;
- (id)smartListID;

@end
