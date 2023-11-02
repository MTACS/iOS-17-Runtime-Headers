
@interface SFMediaPlayerItem : NSObject {
    id /* block */  _completedHandler;
    id  _observerToken;
    NSArray * _playbackNotificationTimeRanges;
    NSMutableArray * _playerItems;
    bool  _shouldLoop;
    id /* block */  _startedHandler;
    id /* block */  _timeRangeHandler;
    NSURL * _url;
}

@property (nonatomic, copy) id /* block */ completedHandler;
@property (nonatomic, retain) id observerToken;
@property (nonatomic, readonly, copy) NSArray *playbackNotificationTimeRanges;
@property (nonatomic, retain) NSMutableArray *playerItems;
@property (nonatomic) bool shouldLoop;
@property (nonatomic, copy) id /* block */ startedHandler;
@property (nonatomic, readonly, copy) id /* block */ timeRangeHandler;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id /* block */)completedHandler;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)observerToken;
- (id)playbackNotificationTimeRanges;
- (id)playerItems;
- (void)setCompletedHandler:(id /* block */)arg1;
- (void)setObserverToken:(id)arg1;
- (void)setPlaybackNotificationTimeRanges:(id)arg1 withTimeRangeHandler:(id /* block */)arg2;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayerItems:(id)arg1;
- (void)setShouldLoop:(bool)arg1;
- (void)setStartedHandler:(id /* block */)arg1;
- (bool)shouldLoop;
- (id /* block */)startedHandler;
- (id /* block */)timeRangeHandler;
- (id)url;

@end
