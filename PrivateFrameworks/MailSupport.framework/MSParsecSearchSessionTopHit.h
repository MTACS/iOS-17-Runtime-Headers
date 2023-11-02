
@interface MSParsecSearchSessionTopHit : MSParsecSearchSessionMessageResult {
    SFMailRankingSignals * _mailRankingSignals;
}

@property (nonatomic, readonly) SFMailRankingSignals *mailRankingSignals;

+ (id)topHitWithIdentifier:(id)arg1 date:(id)arg2 mailRankingSignals:(id)arg3;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 mailRankingSignals:(id)arg3;
- (id)mailRankingSignals;

@end
