
@interface REMListSectionChangeItem : REMBaseSectionChangeItem

@property (nonatomic, copy) NSString *canonicalName;
@property (nonatomic, retain) REMObjectID *listID;

+ (id)cdEntityName;
+ (id)keysToObserve;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (id)initWithObjectID:(id)arg1 displayName:(id)arg2 insertIntoListChangeItem:(id)arg3;
- (id)listID;
- (void)removeFromList;
- (void)setListID:(id)arg1;

@end
