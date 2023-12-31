
@protocol GKTurnBasedMatchmakerServiceProtocol <GKExtensionProtocol>

@optional

- (void)refreshMatches;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setShowExistingMatches:(bool)arg1;
- (void)setShowPlay:(bool)arg1;
- (void)setShowQuit:(bool)arg1;

@end
