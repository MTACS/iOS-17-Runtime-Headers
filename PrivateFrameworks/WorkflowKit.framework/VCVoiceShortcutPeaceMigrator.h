
@interface VCVoiceShortcutPeaceMigrator : NSObject {
    WFDatabase * _database;
}

@property (nonatomic, readonly) WFDatabase *database;

+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1;

- (void).cxx_destruct;
- (id)database;
- (id)initWithDatabase:(id)arg1;
- (bool)migrateObject:(id)arg1 error:(id*)arg2;
- (bool)migrateWithError:(id*)arg1;
- (bool)saveRecord:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;

@end
