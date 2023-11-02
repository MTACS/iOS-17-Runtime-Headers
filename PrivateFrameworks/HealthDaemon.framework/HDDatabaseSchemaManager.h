
@interface HDDatabaseSchemaManager : NSObject {
    NSMutableSet * _createdDatabaseNames;
    HDDatabaseMigrationTransaction * _transaction;
}

- (void).cxx_destruct;
- (long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id*)arg3;
- (id)initWithTransaction:(id)arg1;
- (bool)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id*)arg4;

@end
