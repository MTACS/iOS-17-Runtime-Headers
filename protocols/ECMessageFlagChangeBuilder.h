
@protocol ECMessageFlagChangeBuilder

@required

- (void)changesDeletedTo:(bool)arg1;
- (void)changesDraftTo:(bool)arg1;
- (void)changesFlagColorTo:(unsigned long long)arg1;
- (void)changesFlaggedTo:(bool)arg1;
- (void)changesForwardedTo:(bool)arg1;
- (void)changesJunkLevelSetByUserTo:(bool)arg1;
- (void)changesJunkLevelTo:(unsigned long long)arg1;
- (void)changesReadTo:(bool)arg1;
- (void)changesRedirectedTo:(bool)arg1;
- (void)changesRepliedTo:(bool)arg1;
- (long long)reason;
- (void)setReason:(long long)arg1;

@end
