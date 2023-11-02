
@interface GKViceroyVoiceChat : NSObject <GKVoiceChatSessionDelegate> {
    GKConnection * _connection;
    GKVoiceChatSession * _voiceChatSession;
    <GKViceroyVoiceChatStateUpdateDelegate> * _weakStateUpdateDelegate;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) GKConnection *connection;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) <GKViceroyVoiceChatStateUpdateDelegate> *stateUpdateDelegate;
@property (nonatomic, retain) GKVoiceChatSession *voiceChatSession;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3;
- (id)initWithName:(id)arg1 connection:(id)arg2 gkSession:(id)arg3;
- (bool)isActive;
- (id)name;
- (void)setActive:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setMuted:(bool)arg1 forPlayerID:(id)arg2;
- (void)setStateUpdateDelegate:(id)arg1;
- (void)setVoiceChatSession:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)start;
- (id)stateUpdateDelegate;
- (void)stop;
- (id)voiceChatSession;
- (float)volume;

@end
