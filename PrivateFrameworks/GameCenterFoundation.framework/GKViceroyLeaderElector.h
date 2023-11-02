
@interface GKViceroyLeaderElector : NSObject {
    id /* block */  _chooseHostCompletion;
    bool  _hostScoreForQuery;
    NSMutableDictionary * _hostScores;
    NSString * _localPlayerPeerID;
    bool  _needHostScore;
    NSDictionary * _networkStatistics;
    <GKTransportSupport> * _transportSupportWeak;
}

@property (nonatomic, copy) id /* block */ chooseHostCompletion;
@property (nonatomic) bool hostScoreForQuery;
@property (nonatomic, retain) NSMutableDictionary *hostScores;
@property (nonatomic) NSString *localPlayerPeerID;
@property (nonatomic) bool needHostScore;
@property (nonatomic, retain) NSDictionary *networkStatistics;
@property (nonatomic) <GKTransportSupport> *transportSupport;

- (void).cxx_destruct;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (void)calculateHostScore;
- (void)chooseBestHostingPlayerWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)chooseHostCompletion;
- (bool)haveAllHostScores;
- (bool)hostScoreForQuery;
- (id)hostScores;
- (id)initWithTransportSupport:(id)arg1;
- (id)localPlayerPeerID;
- (bool)needHostScore;
- (id)networkStatistics;
- (void)networkStatisticsDidChange:(id)arg1 localPlayerPeerID:(id)arg2;
- (void)receivedChooseHostData:(id)arg1 fromPlayerID:(id)arg2;
- (bool)selectHostIfRequestedAndAllScored;
- (void)sendHostScoreAsQuery:(bool)arg1;
- (void)setChooseHostCompletion:(id /* block */)arg1;
- (void)setHostScoreForQuery:(bool)arg1;
- (void)setHostScores:(id)arg1;
- (void)setLocalPlayerPeerID:(id)arg1;
- (void)setNeedHostScore:(bool)arg1;
- (void)setNetworkStatistics:(id)arg1;
- (void)setTransportSupport:(id)arg1;
- (id)transportSupport;

@end
