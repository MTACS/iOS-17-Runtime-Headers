
@interface HDEntityEncoder : NSObject {
    id /* block */  _authorizationFilter;
    HDSQLiteDatabase * _database;
    NSDictionary * _encodingOptions;
    Class  _entityClass;
    HDProfile * _profile;
    long long  _purpose;
    HDEntityEncoder * _superclassEncoder;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly, copy) id /* block */ authorizationFilter;
@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly, copy) NSDictionary *encodingOptions;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) long long purpose;
@property (nonatomic, readonly) HDEntityEncoder *superclassEncoder;
@property (nonatomic, readonly) HDDatabaseTransaction *transaction;

+ (long long)estimatedEncodedSize;

- (void).cxx_destruct;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id /* block */)authorizationFilter;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { }*)arg1;
- (id)database;
- (id)encodingOptions;
- (Class)entityClass;
- (void)finish;
- (bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* block */)arg6;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;
- (id)profile;
- (long long)purpose;
- (id)superclassEncoder;
- (id)transaction;

@end
