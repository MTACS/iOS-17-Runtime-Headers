
@interface HDDatabaseMigrationStep : NSObject {
    long long  _finalSchemaVersion;
    long long  _foreignKeyStatus;
    id /* block */  _migrationHandler;
    long long  _requiredPrimarySchemaVersion;
    NSString * _schemaName;
}

@property (nonatomic, readonly) long long finalSchemaVersion;
@property (nonatomic) long long foreignKeyStatus;
@property (nonatomic, readonly, copy) id /* block */ migrationHandler;
@property (nonatomic, readonly) long long requiredPrimarySchemaVersion;
@property (nonatomic, readonly, copy) NSString *schemaName;

+ (id)migrationStepFrom:(long long)arg1 to:(long long)arg2 handler:(id /* block */)arg3;
+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)arg1 to:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)description;
- (long long)finalSchemaVersion;
- (long long)foreignKeyStatus;
- (id)initForSchema:(id)arg1 toVersion:(long long)arg2 requiringVersion:(long long)arg3 foreignKeys:(long long)arg4 handler:(id /* block */)arg5;
- (id /* block */)migrationHandler;
- (long long)requiredPrimarySchemaVersion;
- (id)schemaName;
- (void)setForeignKeyStatus:(long long)arg1;

@end
