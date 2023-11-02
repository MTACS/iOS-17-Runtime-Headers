
@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> {
    HDProfile * _profile;
    <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> * _syncedEarnedInstancesObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic) <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> *syncedEarnedInstancesObserver;

- (void).cxx_destruct;
- (id)allEarnedInstancesWithError:(id*)arg1;
- (bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (id)earnedInstancesForDateComponents:(id)arg1 error:(id*)arg2;
- (id)earnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4;
- (id)profile;
- (bool)removeAllEarnedInstancesWithError:(id*)arg1;
- (bool)removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (bool)removeEarnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (void)setProfile:(id)arg1;
- (void)setSyncedEarnedInstancesObserver:(id)arg1;
- (id)syncedEarnedInstancesObserver;

@end
