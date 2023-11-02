
@interface AnalyticsStoreProxy : NSObject

+ (id)analyticsStoreEntitiesWithDate;
+ (id)analyticsStoreEntityNames;
+ (id)analyticsStoreEntityRelationshipNames;
+ (bool)batchDelete:(id)arg1 withPredicate:(id)arg2 withFetchRequest:(id)arg3 moc:(id)arg4;
+ (bool)batchUpdate:(id)arg1 withPredicate:(id)arg2 propertiesToUpdate:(id)arg3 moc:(id)arg4;
+ (id)createEntity:(id)arg1 moc:(id)arg2;
+ (id)entity:(id)arg1 withPredicate:(id)arg2 created:(bool*)arg3 moc:(id)arg4;
+ (id)entityByCounting:(id)arg1 withPredicate:(id)arg2 created:(bool*)arg3 moc:(id)arg4;
+ (unsigned long long)entityCount:(id)arg1 withPredicate:(id)arg2 moc:(id)arg3;
+ (id)fetch:(id)arg1 withPredicate:(id)arg2 moc:(id)arg3;
+ (id)fetchAll:(id)arg1 moc:(id)arg2;
+ (id)fetchPropertiesForEntity:(id)arg1 properties:(id)arg2 predicate:(id)arg3 moc:(id)arg4;
+ (id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg1 properties:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptor:(id)arg5 returnDistinct:(bool)arg6 moc:(id)arg7;
+ (id)fetchRequestForEntity:(id)arg1;
+ (id)fetchRequestForEntityWithBatchSize:(id)arg1 batchSize:(unsigned long long)arg2 prefetch:(id)arg3;
+ (id)fetchRequestForEntityWithOffset:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 prefetch:(id)arg4;
+ (id)predicateForEntityWithAge:(id)arg1 maxAge:(unsigned long long)arg2;
+ (id)predicateForEntityWithAgeOlderThan:(id)arg1 dateAttribute:(id)arg2 olderThan:(double)arg3;

@end
