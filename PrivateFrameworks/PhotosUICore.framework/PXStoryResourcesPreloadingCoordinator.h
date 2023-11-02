
@interface PXStoryResourcesPreloadingCoordinator : PXObservable <PXChangeObserver, PXStoryMutableResourcesPreloadingCoordinator, PXStoryQueueParticipant> {
    NSMutableArray * _infos;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXUpdater * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (id)_infoForPreloadingController:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_invalidateInfosOrder;
- (void)_invalidatePreloadingControllers;
- (void)_setNeedsUpdate;
- (void)_updateInfosOrder;
- (void)_updatePreloadingControllers;
- (void)addPreloadingController:(id)arg1 withPriority:(long long)arg2;
- (void)didPerformChanges;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)removePreloadingController:(id)arg1;
- (id)storyQueue;
- (id)updater;

@end
