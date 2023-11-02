
@interface MPBaseEntityTranslator : NSObject {
    Class  _MPModelClass;
    struct { 
        unsigned int _relationshipPreparesSource : 1; 
    }  _optionalHooks;
    NSMutableDictionary * _propertiesToTranslators;
    NSMutableDictionary * _relationshipsToTranslators;
    id /* block */  _sourcePreprocessorBlock;
    NSMutableSet * _unsupportedKeys;
}

@property (nonatomic, readonly) Class MPModelClass;

+ (void)buildSchemaIfNeeded;
+ (id)createTranslatorForMPModelClass:(Class)arg1;
+ (id)translatorForMPModelClass:(Class)arg1;

- (void).cxx_destruct;
- (Class)MPModelClass;
- (id)_objectForPropertySet:(id)arg1 source:(id)arg2 context:(id)arg3;
- (id)_objectForRelationshipKey:(id)arg1 propertySet:(id)arg2 source:(id)arg3 context:(id)arg4;
- (id)_valueForPropertyKey:(id)arg1 source:(id)arg2 context:(id)arg3;
- (Class)classForRelationshipKey:(id)arg1;
- (id)description;
- (id)initWithMPModelClass:(Class)arg1;
- (void)mapUnsupportedPropertyKey:(id)arg1;
- (void)mapUnsupportedRelationshipKey:(id)arg1;
- (id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3;
- (void)setSourcePreprocessorBlock:(id /* block */)arg1;

@end
