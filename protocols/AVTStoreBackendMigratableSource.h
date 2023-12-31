
@protocol AVTStoreBackendMigratableSource <NSObject>

@required

- (<AVTStoreBackend> *)createSourceBackend;
- (bool)finalizeMigration:(id*)arg1;
- (AVTAvatarRecord *)migratedRecordFromRecord:(AVTAvatarRecord *)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;
- (bool)migrationNeeded;

@end
