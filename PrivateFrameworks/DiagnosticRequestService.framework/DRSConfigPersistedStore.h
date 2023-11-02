
@interface DRSConfigPersistedStore : NSObject {
    DRSTaskingCloudKitHelper * _cloudKitHelper;
    NSPersistentContainer * _container;
    NSManagedObjectContext * _context;
    bool  _isReadOnly;
    NSString * _workingDirectory;
}

@property (nonatomic, readonly) DRSTaskingCloudKitHelper *cloudKitHelper;
@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *workingDirectory;

- (void).cxx_destruct;
- (id)_ON_MOC_cloudChannelConfigMOs;
- (void)_ON_MOC_deleteCloudChannelConfigMOs:(id)arg1;
- (unsigned long long)_countForFetchRequest:(id)arg1 withPredicate:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4;
- (bool)addConfigMetdata:(id)arg1 errorOut:(id*)arg2;
- (bool)applyWaitingConfigWithUUID:(id)arg1 appliedDate:(id)arg2 errorOut:(id*)arg3;
- (bool)clearStoreWithErrorOut:(id*)arg1;
- (id)cloudChannelConfig;
- (id)cloudKitHelper;
- (bool)completeConfigWithUUID:(id)arg1 completedDate:(id)arg2 completionType:(unsigned long long)arg3 completionDescription:(id)arg4 errorOut:(id*)arg5;
- (unsigned long long)configCountForPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 withErrorOut:(id*)arg3;
- (id)configMetadataForUUID:(id)arg1 errorOut:(id*)arg2;
- (id)configMetadatasForPredicate:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4;
- (id)container;
- (id)context;
- (id)initWithWorkingDirectory:(id)arg1 isReadOnly:(bool)arg2 cloudKitHelper:(id)arg3 errorOut:(id*)arg4;
- (bool)isReadOnly;
- (unsigned long long)metadataCountForPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 withErrorOut:(id*)arg3;
- (bool)updateCloudChannelConfig:(id)arg1 errorOut:(id*)arg2;
- (id)workingDirectory;

@end
