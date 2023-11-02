
@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {
    NSMutableDictionary * _attributeIndexValuesByEntityName;
    NSMutableDictionary * _relationshipIndexValuesByEntityName;
}

- (void).cxx_destruct;
- (id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPLQueryChangeDetectionCriteria:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
