
@interface MTSyncChangeQueue : NSObject {
    NSMutableArray * _changeQueue;
    <MTSyncChangeStore> * _changeStore;
    NSObject<OS_dispatch_group> * _changesLoaded;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) NSMutableArray *changeQueue;
@property (nonatomic, retain) <MTSyncChangeStore> *changeStore;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *changesLoaded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) <NAScheduler> *serializer;

- (void).cxx_destruct;
- (void)_enqueueAction:(id)arg1;
- (void)_enqueueChange:(id)arg1 changeCompareBlock:(id /* block */)arg2;
- (id)_resolveChange:(id)arg1;
- (id)_resolveChange:(id)arg1 resolutionHandler:(id /* block */)arg2;
- (id)changeQueue;
- (id)changeStore;
- (id)changesLoaded;
- (void)dequeueChanges:(id)arg1;
- (void)enqueueChange:(id)arg1;
- (bool)hasPendingChanges;
- (id)initWithChangeStore:(id)arg1;
- (void)loadChanges;
- (id)pendingChanges;
- (void)performBlockOnceChangesAreLoaded:(id /* block */)arg1 async:(bool)arg2;
- (void)persistChanges;
- (void)removePendingChanges;
- (id)resolveChange:(id)arg1;
- (id)serialQueue;
- (id)serializer;
- (void)setChangeQueue:(id)arg1;
- (void)setChangeStore:(id)arg1;
- (void)setChangesLoaded:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSerializer:(id)arg1;

@end
