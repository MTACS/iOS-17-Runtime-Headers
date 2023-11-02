
@interface _HDCategorySampleEntityEncoder : HDEntityEncoder {
    bool  _overrideMCCategorySampleValue;
}

+ (long long)estimatedEncodedSize;

- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { }*)arg1;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* block */)arg6;
- (id)orderedProperties;

@end
