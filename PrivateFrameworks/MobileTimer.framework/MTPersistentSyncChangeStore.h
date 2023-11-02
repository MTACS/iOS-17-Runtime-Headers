
@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore> {
    <NAScheduler> * _archiverScheduler;
    NSString * _syncDataFile;
    NSString * _syncDataPath;
}

@property (nonatomic, readonly) <NAScheduler> *archiverScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *syncDataFile;
@property (nonatomic, copy) NSString *syncDataPath;

- (void).cxx_destruct;
- (void)_removeSyncDataFile;
- (id)archiverScheduler;
- (id)initWithDataModel:(id)arg1;
- (id)loadChanges;
- (void)persistChanges:(id)arg1;
- (void)setSyncDataFile:(id)arg1;
- (void)setSyncDataPath:(id)arg1;
- (void)setupSyncDataFileForDataModel:(id)arg1;
- (id)syncDataFile;
- (id)syncDataPath;

@end
