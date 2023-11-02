
@interface PXStoryAudioSessionController : PXStoryController {
    AVAudioSession * _audioSession;
    PXStoryModel * _model;
    bool  _shouldMixWithOthers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) bool shouldMixWithOthers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleMediaServicesResetNotification:(id)arg1;
- (void)_invalidateAudioSession;
- (void)_invalidateShouldMixWithOthers;
- (void)_storyQueue_discardExistingAudioSession;
- (void)_updateAudioSession;
- (void)_updateShouldMixWithOthers;
- (void)_workQueue_createAudioSession;
- (id)audioSession;
- (void)configureUpdater:(id)arg1;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)model;
- (void)setAudioSession:(id)arg1;
- (void)setShouldMixWithOthers:(bool)arg1;
- (bool)shouldMixWithOthers;
- (id)workQueue;

@end
