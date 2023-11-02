
@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;
+ (id)translatorForKind:(id)arg1;

- (id)identifiersForPayload:(id)arg1 context:(id)arg2;
- (void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(id /* block */)arg2;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(id /* block */)arg3;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(int (*)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 payloadTransform:(id /* block */)arg3;
- (id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3;
- (id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3;

@end
