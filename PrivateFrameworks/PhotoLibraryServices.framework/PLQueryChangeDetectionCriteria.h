
@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary * _attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary * _relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) bool isEmpty;

- (void).cxx_destruct;
- (void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2;
- (void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2;
- (id)description;
- (void)enumerateEntitiesAndAttributesUsingBlock:(id /* block */)arg1;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(id /* block */)arg1;
- (id)init;
- (bool)isEmpty;

@end
