
@interface PXStorySongController : PXStoryController {
    <PXStorySongResource> * _currentSongResource;
    NSSet * _failedAudioAssets;
    PXStoryModel * _model;
}

@property (nonatomic, retain) <PXStorySongResource> *currentSongResource;
@property (nonatomic, readonly) NSSet *failedAudioAssets;
@property (nonatomic, readonly) PXStoryModel *model;

- (void).cxx_destruct;
- (void)_invalidateCurrentSongResource;
- (void)_updateCurrentSongResource;
- (void)configureUpdater:(id)arg1;
- (id)currentSongResource;
- (id)failedAudioAssets;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)model;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)setCurrentSongResource:(id)arg1;
- (void)setFailedAudioAssets:(id)arg1;

@end
