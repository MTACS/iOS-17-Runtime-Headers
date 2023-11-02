
@interface PUOneUpMergedVideoProvider : PXObservable <PUBrowsingViewModelChangeObserver, PXChangeObserver> {
    PUBrowsingViewModel * _browsingViewModel;
    PUMergedLivePhotosVideoRequest * _currentRequest;
    NSError * _error;
    ISLivePhotoPlayer * _livePhotoPlayer;
    PUMergedLivePhotosVideo * _mergedVideo;
    long long  _state;
}

@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, retain) PUMergedLivePhotosVideoRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ISLivePhotoPlayer *livePhotoPlayer;
@property (nonatomic, retain) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRequestChanges:(id)arg1;
- (void)_handleViewModelChanges;
- (void)_updateLivePhotoPlayerItem;
- (id)browsingViewModel;
- (id)currentRequest;
- (id)error;
- (id)initWithBrowsingViewModel:(id)arg1;
- (id)livePhotoPlayer;
- (id)mergedVideo;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCurrentRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMergedVideo:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
