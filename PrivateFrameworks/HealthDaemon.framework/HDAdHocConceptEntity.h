
@interface HDAdHocConceptEntity : HDHealthEntity

+ (id)adHocConceptForCodingCollection:(id)arg1 options:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)adHocConceptForIdentifier:(id)arg1 options:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteNonIndexedConceptsWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)enumerateAdHocConceptWithRawIdentifiers:(id)arg1 options:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)generateAdHocConceptForCodingCollection:(id)arg1 options:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;

@end
