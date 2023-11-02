
@interface GKVoiceChat : NSObject <GKViceroyVoiceChatStateUpdateDelegate> {
    GKViceroyVoiceChat * _gkVoiceChat;
    id /* block */  _playerStateUpdateHandler;
    id /* block */  _playerVoiceChatStateDidChangeHandler;
    NSArray * _players;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) GKViceroyVoiceChat *gkVoiceChat;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) id /* block */ playerStateUpdateHandler;
@property (nonatomic, copy) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic) float volume;

+ (bool)isVoIPAllowed;

- (void).cxx_destruct;
- (id)gkVoiceChat;
- (id)initWithViceroyVoiceChat:(id)arg1 players:(id)arg2;
- (bool)isActive;
- (id)name;
- (id)playerIDs;
- (id /* block */)playerStateUpdateHandler;
- (id /* block */)playerVoiceChatStateDidChangeHandler;
- (id)players;
- (void)setActive:(bool)arg1;
- (void)setGkVoiceChat:(id)arg1;
- (void)setMute:(bool)arg1 forPlayer:(id)arg2;
- (void)setPlayer:(id)arg1 muted:(bool)arg2;
- (void)setPlayerStateUpdateHandler:(id /* block */)arg1;
- (void)setPlayerVoiceChatStateDidChangeHandler:(id /* block */)arg1;
- (void)setPlayers:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)stateUpdate:(long long)arg1 forPlayerID:(id)arg2;
- (void)stop;
- (float)volume;

@end
