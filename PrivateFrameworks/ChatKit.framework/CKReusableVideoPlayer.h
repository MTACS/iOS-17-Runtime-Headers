
@interface CKReusableVideoPlayer : NSObject <AVPlayerViewControllerDelegate> {
    <CKReusableVideoPlayerDelegate> * _delegate;
    bool  _observingPlayer;
    AVPlayerViewController * _playerViewController;
    bool  _playing;
    NSString * _videoTransferGUID;
    bool  _wasPlayingBeforeDisappearing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKReusableVideoPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObservingPlayer, nonatomic) bool observingPlayer;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (getter=isPlaying, nonatomic) bool playing;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *videoTransferGUID;
@property (nonatomic) bool wasPlayingBeforeDisappearing;

- (void).cxx_destruct;
- (void)configureWithPlayerItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isObservingPlayer;
- (bool)isPictureInPictureActive;
- (bool)isPlaying;
- (bool)isReadyForReuse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (id)playerViewController;
- (void)removeCurrentPlayerItem;
- (void)removeRateObserverIfNecessary;
- (void)selectedConversationChanged;
- (void)setDelegate:(id)arg1;
- (void)setObservingPlayer:(bool)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setVideoTransferGUID:(id)arg1;
- (void)setWasPlayingBeforeDisappearing:(bool)arg1;
- (id)videoTransferGUID;
- (bool)wasPlayingBeforeDisappearing;
- (void)willDisappear;
- (void)windowDidClose;

@end
