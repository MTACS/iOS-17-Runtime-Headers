
@interface HDSQLiteEntity : HDSQLiteSchemaEntity <HDSQLiteEntity, NSCopying> {
    long long  _persistentID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long persistentID;
@property (readonly) Class superclass;

+ (id)additionalPredicateForEnumeration;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)entityWithPersistentID:(id)arg1;
+ (bool)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingTerms:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id*)arg8 enumerationHandler:(id /* block */)arg9;
+ (id)firstInDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 error:(id*)arg4;
+ (bool)hasROWID;
+ (id)insertOrReplaceEntity:(bool)arg1 database:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;
+ (id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)primaryKeyColumns;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingTerms:(id)arg4 groupBy:(id)arg5;
+ (long long)sizeOfEntityTableInDatabase:(id)arg1;
+ (id)sumValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)updateProperties:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;

- (id)UUIDForProperty:(id)arg1 database:(id)arg2;
- (bool)booleanForProperty:(id)arg1 database:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForProperty:(id)arg1 database:(id)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (id)description;
- (bool)existsInDatabase:(id)arg1;
- (bool)getValuesForProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithPersistentID:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)numberForProperty:(id)arg1 database:(id)arg2;
- (long long)persistentID;
- (id)stringForProperty:(id)arg1 database:(id)arg2;
- (bool)updateProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4;
- (id)valueForProperty:(id)arg1 database:(id)arg2;
- (void)willDeleteFromDatabase:(id)arg1;

@end
