
@interface HDCorrelationSampleEntity : HDSampleEntity

+ (bool)acceptsObject:(id)arg1;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)createTableSQL;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isBackedByTable;
+ (bool)isConcreteEntity;
+ (bool)requiresSampleTypePredicate;

- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;

@end
