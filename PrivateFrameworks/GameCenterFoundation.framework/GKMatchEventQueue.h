
@interface GKMatchEventQueue : NSObject <GKPlayerConnectionContext> {
    NSMutableDictionary * _connectionInfo;
    bool  _counted;
    long long  _deferedPlayerState;
    NSMutableArray * _events;
    bool  _hasInitRelayInfo;
    bool  _hasUpdateRelayInfo;
    GKPlayer * _hostPlayer;
    bool  _invitedByLocalPlayer;
    bool  _okToSend;
    GKPlayer * _player;
    long long  _playerState;
    bool  _relayInitiated;
    unsigned int  _sequenceNumber;
}

@property (nonatomic, readonly) bool connected;
@property (nonatomic, retain) NSMutableDictionary *connectionInfo;
@property (nonatomic) bool counted;
@property (nonatomic) long long deferedPlayerState;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasInitRelayInfo;
@property (nonatomic) bool hasUpdateRelayInfo;
@property (nonatomic, retain) GKPlayer *hostPlayer;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic) bool invitedByLocalPlayer;
@property (nonatomic) bool okToSend;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) long long playerState;
@property (nonatomic) bool relayInitiated;
@property (nonatomic) unsigned int sequenceNumber;

- (void).cxx_destruct;
- (bool)connected;
- (id)connectionInfo;
- (bool)counted;
- (long long)deferedPlayerState;
- (id)events;
- (bool)hasInitRelayInfo;
- (bool)hasUpdateRelayInfo;
- (id)hostPlayer;
- (id)info;
- (id)init;
- (bool)invitedByLocalPlayer;
- (bool)okToSend;
- (id)player;
- (long long)playerState;
- (bool)relayInitiated;
- (unsigned int)sequenceNumber;
- (void)setConnectionInfo:(id)arg1;
- (void)setCounted:(bool)arg1;
- (void)setDeferedPlayerState:(long long)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasInitRelayInfo:(bool)arg1;
- (void)setHasUpdateRelayInfo:(bool)arg1;
- (void)setHostPlayer:(id)arg1;
- (void)setInvitedByLocalPlayer:(bool)arg1;
- (void)setOkToSend:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerState:(long long)arg1;
- (void)setRelayInitiated:(bool)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;

@end
