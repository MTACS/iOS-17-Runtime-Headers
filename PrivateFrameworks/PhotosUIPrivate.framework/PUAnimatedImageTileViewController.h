
@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {
    ISAnimatedImageView * _animatedImageView;
    long long  _interactionState;
    struct { 
        bool playbackState; 
        bool animatedImage; 
    }  _isValid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAnimatedImage;
- (void)_invalidatePlaybackState;
- (void)_updateAnimatedImageIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)assetViewModelDidChange;
- (id)loadView;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
