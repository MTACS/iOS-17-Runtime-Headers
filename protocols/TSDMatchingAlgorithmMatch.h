
@protocol TSDMatchingAlgorithmMatch

@required

- (bool)conflictsWithMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
- (id)incomingMatchObject;
- (long long)matchCost;
- (id)outgoingMatchObject;

@end
