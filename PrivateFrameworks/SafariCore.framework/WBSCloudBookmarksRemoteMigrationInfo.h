
@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject {
    long long  _migrationState;
    NSString * _migratorDeviceIdentifier;
    NSDate * _serverModificationDate;
}

@property (nonatomic, readonly) long long migrationState;
@property (nonatomic, readonly, copy) NSString *migratorDeviceIdentifier;
@property (nonatomic, readonly) NSDate *serverModificationDate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3;
- (long long)migrationState;
- (id)migratorDeviceIdentifier;
- (id)serverModificationDate;

@end
