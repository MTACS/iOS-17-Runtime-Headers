
@interface HDDatabaseMigrationTransaction : NSObject {
    _HKBehavior * _behavior;
    <HDDatabaseMigrationTransactionDelegate> * _delegate;
    HDSQLiteDatabase * _protectedDatabase;
    NSArray * _schemaProviders;
    HDSQLiteDatabase * _unprotectedDatabase;
}

@property (nonatomic, readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HDSQLiteDatabase *defaultDatabase;
@property (nonatomic, readonly) long long defaultProtectionClass;
@property (nonatomic) <HDDatabaseMigrationTransactionDelegate> *delegate;
@property (nonatomic, readonly) bool isProtectedMigration;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly, copy) NSArray *schemaProviders;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;

- (void).cxx_destruct;
- (long long)HFDRebuildState;
- (long long)accessHistoricHFDWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)behavior;
- (id)defaultDatabase;
- (long long)defaultProtectionClass;
- (id)delegate;
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 schemaProviders:(id)arg3 behavior:(id)arg4;
- (bool)isProtectedMigration;
- (long long)migrateOrCreateSchemaWithError:(id*)arg1;
- (id)protectedDatabase;
- (id)schemaProviders;
- (void)setDelegate:(id)arg1;
- (void)setHFDRebuildState:(long long)arg1;
- (id)unprotectedDatabase;

@end
