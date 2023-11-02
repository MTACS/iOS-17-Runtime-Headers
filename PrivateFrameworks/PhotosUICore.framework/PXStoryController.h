
@interface PXStoryController : PXObservable <PXChangeObserver, PXStoryMutableController, PXStoryQueueParticipant> {
    PXObservable<PXStoryQueueParticipant> * _observableModel;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXUpdater * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXObservable<PXStoryQueueParticipant> *observableModel;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)configureUpdater:(id)arg1;
- (void)didPerformChanges;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)init;
- (id)initWithObservableModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)observableModel;
- (void)performChanges:(id /* block */)arg1;
- (id)storyQueue;
- (id)updater;

@end
