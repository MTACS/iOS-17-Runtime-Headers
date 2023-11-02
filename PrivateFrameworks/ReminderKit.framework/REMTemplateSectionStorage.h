
@interface REMTemplateSectionStorage : REMBaseSectionStorage

@property (nonatomic, retain) REMObjectID *parentTemplateID;

+ (id)cdEntityName;

- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 parentTemplateID:(id)arg3 displayName:(id)arg4;
- (id)parentTemplateID;
- (void)setParentTemplateID:(id)arg1;

@end
