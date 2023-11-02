
@interface PXMessagesStackPlaybackControlViewModel : PXObservable <PXMutableMessagesStackPlaybackControlViewModel> {
    long long  _currentItem;
    bool  _settled;
    PXGDisplayAssetVideoPresentationController * _videoController;
}

@property (nonatomic, readonly) long long currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSettled, nonatomic, readonly) bool settled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXGDisplayAssetVideoPresentationController *videoController;

- (void).cxx_destruct;
- (long long)currentItem;
- (bool)isSettled;
- (void)setCurrentItem:(long long)arg1;
- (void)setSettled:(bool)arg1;
- (void)setVideoController:(id)arg1;
- (id)videoController;

@end
