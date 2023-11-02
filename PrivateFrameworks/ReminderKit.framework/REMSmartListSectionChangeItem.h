
@interface REMSmartListSectionChangeItem : REMBaseSectionChangeItem

@property (nonatomic, retain) REMObjectID *smartListID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (id)initWithObjectID:(id)arg1 displayName:(id)arg2 insertIntoSmartListChangeItem:(id)arg3;
- (void)removeFromSmartList;
- (void)setSmartListID:(id)arg1;
- (id)smartListID;

@end
