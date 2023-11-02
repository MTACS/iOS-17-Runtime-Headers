
@interface GKInviteAcceptResponse : GKInternalRepresentation {
    NSString * _matchID;
    NSDictionary * _responsePlist;
    NSString * _selfPseudonym;
    NSString * _sessionID;
    NSNumber * _transportVersionToUse;
}

@property (nonatomic, retain) NSString *matchID;
@property (nonatomic, retain) NSDictionary *responsePlist;
@property (nonatomic, retain) NSString *selfPseudonym;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)matchID;
- (id)responsePlist;
- (id)selfPseudonym;
- (id)sessionID;
- (void)setMatchID:(id)arg1;
- (void)setResponsePlist:(id)arg1;
- (void)setSelfPseudonym:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTransportVersionToUse:(id)arg1;
- (id)transportVersionToUse;

@end
