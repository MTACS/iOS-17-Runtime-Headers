
@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController {
    AVPlayerItem * _playerItem;
}

@property (nonatomic, readonly) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (bool)contentHeightLikelyToChange;
- (void)dealloc;
- (id)initWithAVPlayerItem:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerItem;

@end
