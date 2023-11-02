
@interface HDStateOfMindEntity : HDSampleEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isConcreteEntity;
+ (id)predicateForDomain:(long long)arg1;
+ (id)predicateForDomains:(id)arg1;
+ (id)predicateForLabel:(long long)arg1;
+ (id)predicateForLabels:(id)arg1;
+ (id)predicateForReflectiveInterval:(long long)arg1;
+ (id)predicateForReflectiveInterval:(long long)arg1 equals:(bool)arg2;
+ (id)predicateForValence:(double)arg1 comparisonType:(long long)arg2;
+ (id)privateSubEntities;
+ (long long)protectionClass;

@end
