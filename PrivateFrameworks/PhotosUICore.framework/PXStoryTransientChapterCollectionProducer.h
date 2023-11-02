
@interface PXStoryTransientChapterCollectionProducer : NSObject <PXStoryChapterCollectionProducer, PXStoryQueueParticipant, PXStoryTransientChapterCollectionManagerPersistenceDelegate> {
    <PXStoryErrorReporter> * _errorReporter;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXStoryTransientChapterCollectionManager * _transientChapterCollectionManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXStoryErrorReporter> *errorReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)_chapterCollectionManagerWithUneditedChapterColection:(id)arg1;
- (void)_workQueue_persistEditTransaction:(id)arg1;
- (void)chapterCollectionManager:(id)arg1 didApplyEditTransaction:(id)arg2;
- (id)errorReporter;
- (id)init;
- (id)initWithStoryQueue:(id)arg1;
- (id)requestChapterCollectionForKeyAsset:(id)arg1 curatedAssets:(id)arg2 options:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (void)setErrorReporter:(id)arg1;
- (id)storyQueue;
- (id)workQueue;
- (void)workQueue_saveEditTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)arg1 keyAsset:(id)arg2;

@end
