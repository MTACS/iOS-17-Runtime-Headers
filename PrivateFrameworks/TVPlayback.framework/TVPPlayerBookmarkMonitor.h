
@interface TVPPlayerBookmarkMonitor : NSObject {
    NSTimer * _bookmarkPeriodicSaveTimer;
    NSObject<TVPPlayback> * _player;
    bool  _playerHasFinishedLoading;
}

@property (nonatomic, retain) NSTimer *bookmarkPeriodicSaveTimer;
@property (nonatomic) NSObject<TVPPlayback> *player;
@property (nonatomic) bool playerHasFinishedLoading;

- (void).cxx_destruct;
- (void)_bookmarkPeriodicSaveTimerFired:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerErrorDidOccur:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)_updateBookmarkTimeForMediaItem:(id)arg1 player:(id)arg2 playbackOfMediaItemIsEnding:(bool)arg3;
- (void)_updatePlayCountForMediaItem:(id)arg1 player:(id)arg2;
- (id)bookmarkPeriodicSaveTimer;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (bool)playerHasFinishedLoading;
- (void)setBookmarkPeriodicSaveTimer:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerHasFinishedLoading:(bool)arg1;

@end