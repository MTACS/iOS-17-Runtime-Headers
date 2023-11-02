
@interface REMTemplateSectionChangeItem : REMBaseSectionChangeItem

@property (nonatomic, retain) REMObjectID *parentTemplateID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (id)initWithObjectID:(id)arg1 displayName:(id)arg2 insertIntoTemplateChangeItem:(id)arg3;
- (id)parentTemplateID;
- (void)removeFromParentTemplate;
- (void)setParentTemplateID:(id)arg1;

@end
