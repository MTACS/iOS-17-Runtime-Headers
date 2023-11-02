
@protocol IRServiceHandling <NSObject>

@required

- (void)addEvent:(IREventDO *)arg1 forCandidateIdentifier:(NSString *)arg2;
- (void)deleteCandidate:(IRCandidateDO *)arg1;
- (NSDictionary *)requestCurrentContext;
- (void)run;
- (void)updateCandidates:(NSSet *)arg1;

@end
