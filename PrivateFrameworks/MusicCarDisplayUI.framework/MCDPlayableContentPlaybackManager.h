
@interface MCDPlayableContentPlaybackManager : _MCDNowPlayingContentManager <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MCDPCModel * _model;
    long long  _playingItemIndex;
    bool  _seeking;
    long long  _totalItemCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCDPCModel *model;
@property (nonatomic) long long playingItemIndex;
@property (getter=isSeeking, nonatomic) bool seeking;
@property (readonly) Class superclass;
@property (nonatomic) long long totalItemCount;

- (void).cxx_destruct;
- (id)_adjustedIndexPathForPlaybackQueue:(id)arg1;
- (id)_alertActionForFeedbackCommand:(id)arg1 fallbackTitle:(id)arg2;
- (void)_handleHamburgerActionSheet;
- (id)_itemAtIndexPath:(id)arg1;
- (double)_jumpBackwardInterval;
- (double)_jumpForwardInterval;
- (long long)_numberOfItemsInPlaybackQueue;
- (void)_processResponse:(id)arg1 error:(id)arg2;
- (id)_skipIntervalButtonImageForInterval:(double)arg1 size:(long long)arg2;
- (void)_updateTrackQueueIndex;
- (bool)isSeeking;
- (id)model;
- (bool)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (bool)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out bool*)arg5;
- (void)nowPlayingViewControllerAddToLibrary:(id)arg1;
- (bool)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
- (bool)nowPlayingViewControllerCanShowMore:(id)arg1;
- (bool)nowPlayingViewControllerIsRightHandDrive:(id)arg1;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (long long)playingItemIndex;
- (void)setModel:(id)arg1;
- (void)setPlayingItemIndex:(long long)arg1;
- (void)setSeeking:(bool)arg1;
- (void)setTotalItemCount:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)totalItemCount;

@end
