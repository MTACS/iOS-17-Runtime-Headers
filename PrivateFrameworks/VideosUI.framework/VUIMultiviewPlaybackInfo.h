
@interface VUIMultiviewPlaybackInfo : NSObject {
    NSString * _broadcastLocale;
    long long  _context;
    VUIPlayer * _player;
    AVPlayerViewController * _playerViewController;
    bool  _playsFromStart;
}

@property (nonatomic, readonly) NSString *broadcastLocale;
@property (nonatomic) long long context;
@property (nonatomic, retain) VUIPlayer *player;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) bool playsFromStart;

- (void).cxx_destruct;
- (id)broadcastLocale;
- (long long)context;
- (id)initWithPlayer:(id)arg1 playerViewController:(id)arg2 playsFromStart:(bool)arg3 broadcastLocale:(id)arg4;
- (id)player;
- (id)playerViewController;
- (bool)playsFromStart;
- (void)setContext:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerViewController:(id)arg1;

@end
