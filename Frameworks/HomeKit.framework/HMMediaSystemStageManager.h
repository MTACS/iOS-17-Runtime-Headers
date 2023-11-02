
@interface HMMediaSystemStageManager : NSObject <HMFLogging, HMFTimerManagerDelegate> {
    <HMFTimerManager> * _addedMediaSystemTimerManager;
    NSMutableDictionary * _committedMediaSystemsMap;
    <HMMediaSystemStageManagerDataSource> * _dataSource;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMFTimerManager> * _removedMediaSystemTimerManager;
    NSMutableDictionary * _stagedAddedMediaSystemsMap;
    NSMutableSet * _stagedRemovedMediaSystemUUIDs;
}

@property (readonly) <HMFTimerManager> *addedMediaSystemTimerManager;
@property <HMMediaSystemStageManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSArray *mediaSystems;
@property (readonly) <HMFTimerManager> *removedMediaSystemTimerManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)addedMediaSystemTimerManager;
- (id)committedMediaSystems;
- (void)configureWithHome:(id)arg1 context:(id)arg2;
- (id)dataSource;
- (id)dataSourceContext;
- (id)dataSourceHome;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 mediaSystems:(id)arg2;
- (id)initWithIdentifier:(id)arg1 mediaSystems:(id)arg2 addedMediaSystemTimerManager:(id)arg3 removedMediaSystemTimerManager:(id)arg4;
- (id)logIdentifier;
- (id)mediaSystemWithUUID:(id)arg1;
- (id)mediaSystemWithUniqueIdentifier:(id)arg1;
- (id)mediaSystems;
- (bool)mergeMediaSystems:(id)arg1 withHome:(id)arg2 context:(id)arg3;
- (void)notifyDelegateOfAddedMediaSystem:(id)arg1;
- (void)notifyDelegateOfAddedMediaSystem:(id)arg1 usingHome:(id)arg2 context:(id)arg3;
- (void)notifyDelegateOfRemovedMediaSystem:(id)arg1;
- (void)notifyDelegateOfRemovedMediaSystem:(id)arg1 usingHome:(id)arg2 context:(id)arg3;
- (void)postConfigure;
- (id)removedMediaSystemTimerManager;
- (void)setCommittedMediaSystems:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)stageAddedMediaSystem:(id)arg1;
- (void)stageRemovedMediaSystemUUID:(id)arg1;
- (void)timerManager:(id)arg1 didFireForTimerContext:(id)arg2;
- (void)unconfigure;
- (void)unstageAndCommitMediaSystemWithUUID:(id)arg1;
- (void)unstageAndCommitMediaSystems:(id)arg1;
- (void)unstageExpiredStagedAddedMediaSystemUUID:(id)arg1;
- (void)unstageExpiredStagedRemovedMediaSystemUUID:(id)arg1;

@end
