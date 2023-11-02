
@interface GKMatchResponse : GKInternalRepresentation {
    NSData * _cdxTicket;
    NSString * _matchID;
    GKMatchRequestInternal * _matchRequest;
    NSArray * _matches;
    GKDispatchGroup * _matchingGroup;
    NSArray * _relayPushes;
    NSString * _rid;
    NSString * _selfPseudonym;
    int  _sequence;
    NSDictionary * _serverRequest;
    NSData * _sessionToken;
    long long  _state;
    NSNumber * _transportVersionToUse;
}

@property (retain) NSData *cdxTicket;
@property (retain) NSString *matchID;
@property (retain) GKMatchRequestInternal *matchRequest;
@property (retain) NSArray *matches;
@property GKDispatchGroup *matchingGroup;
@property (retain) NSArray *relayPushes;
@property (retain) NSString *rid;
@property (retain) NSString *selfPseudonym;
@property (readonly) int sequence;
@property (retain) NSDictionary *serverRequest;
@property (retain) NSData *sessionToken;
@property (nonatomic) long long state;
@property (retain) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (int)_incrementSequence;
- (id)cdxTicket;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isNetworkError;
- (bool)isTimeout;
- (id)matchID;
- (id)matchRequest;
- (id)matches;
- (id)matchingGroup;
- (id)relayPushes;
- (id)rid;
- (id)selfPseudonym;
- (int)sequence;
- (id)serverRequest;
- (id)sessionToken;
- (void)setCdxTicket:(id)arg1;
- (void)setMatchID:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMatches:(id)arg1;
- (void)setMatchingGroup:(id)arg1;
- (void)setRelayPushes:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setSelfPseudonym:(id)arg1;
- (void)setServerRequest:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTransportVersionToUse:(id)arg1;
- (long long)state;
- (bool)transitionToState:(long long)arg1;
- (id)transportVersionToUse;

@end
