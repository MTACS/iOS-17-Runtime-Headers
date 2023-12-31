
@interface _HDLocationSeriesSampleEntityEncoder : HDEntityEncoder

- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;

@end
