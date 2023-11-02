
@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable * _rc;
}

+ (id)recordCacheForContainer:(id)arg1;
+ (id)recordCacheInDatabase:(id)arg1 withContainer:(id)arg2;
+ (id)recordCacheWithPath:(id)arg1 forContainer:(id)arg2;
+ (unsigned long long)ttlDays;

- (void).cxx_destruct;
- (id)createTables:(id*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
