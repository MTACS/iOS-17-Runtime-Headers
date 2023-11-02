
@interface IRRuleOutputHistoryPattern : IRRuleOutput {
    unsigned long long  _numberOfEventsInHistory;
    NSDictionary * _scoreForCandidates;
}

@property (nonatomic) unsigned long long numberOfEventsInHistory;
@property (nonatomic, retain) NSDictionary *scoreForCandidates;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)arg1;
- (id)initWithRule:(id)arg1;
- (unsigned long long)numberOfEventsInHistory;
- (id)scoreForCandidates;
- (void)setNumberOfEventsInHistory:(unsigned long long)arg1;
- (void)setScoreForCandidates:(id)arg1;

@end
