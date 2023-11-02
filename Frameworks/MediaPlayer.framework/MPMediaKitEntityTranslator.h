
@interface MPMediaKitEntityTranslator : MPBaseEntityTranslator <MPMediaKitGenericObjectTranslator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)buildSchemaIfNeeded;
+ (id)createGenericObjectTranslator;
+ (id)createTranslatorForMPModelClass:(Class)arg1;
+ (id)translatorForType:(id)arg1;

- (id)identifiersForPayload:(id)arg1 context:(id)arg2;
- (void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(id /* block */)arg2;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(id /* block */)arg3;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(int (*)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3 attributePayloadTransform:(id /* block */)arg4;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3 payloadTransform:(id /* block */)arg4;
- (id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3;

@end
