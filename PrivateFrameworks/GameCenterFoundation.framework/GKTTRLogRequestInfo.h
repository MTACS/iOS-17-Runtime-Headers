
@interface GKTTRLogRequestInfo : GKInternalRepresentation {
    NSArray * _playersAndPushTokens;
    NSString * _radarID;
    NSString * _requesterAlias;
}

@property (nonatomic, retain) NSArray *playersAndPushTokens;
@property (nonatomic, retain) NSString *radarID;
@property (nonatomic, retain) NSString *requesterAlias;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithPlayersAndPushTokens:(id)arg1 radarID:(id)arg2 requesterAlias:(id)arg3;
- (id)playersAndPushTokens;
- (id)radarID;
- (id)requesterAlias;
- (void)setPlayersAndPushTokens:(id)arg1;
- (void)setRadarID:(id)arg1;
- (void)setRequesterAlias:(id)arg1;

@end
