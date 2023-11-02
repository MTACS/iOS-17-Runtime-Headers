
@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware> {
    <FCCKDatabaseRecordMiddleware> * _encryptionMiddleware;
    FCCKZoneSchema * _legacyZoneSchema;
    FCCKZoneSchema * _secureZoneSchema;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;
- (id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
- (bool)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
- (bool)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
- (id)databaseMigrationZoneNamesForDatabase:(id)arg1;
- (void)performStartUpForDatabase:(id)arg1 completion:(id /* block */)arg2;

@end
