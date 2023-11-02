
@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;

- (id)identifiersForContentItem:(id)arg1;
- (void)mapArtworkPropertyKey:(id)arg1;
- (void)mapIdentifierCreationBlock:(id /* block */)arg1;
- (void)mapPropertyKey:(id)arg1 toDeviceSpecificUserInfoKey:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2;
- (void)mapPropertyKey:(id)arg1 toUserInfoKey:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toValueTransformer:(id /* block */)arg2;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3;
- (id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3;

@end
