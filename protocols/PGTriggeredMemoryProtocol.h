
@protocol PGTriggeredMemoryProtocol <PGMemoryNodeProtocol>

@required

- (NSArray *)blockableFeatures;
- (NSDate *)creationDate;
- (double)electionScore;
- (long long)photosGraphVersion;
- (void)setBlockableFeatures:(NSArray *)arg1;
- (void)setElectionScore:(double)arg1;
- (NSIndexSet *)triggerTypes;
- (NSDictionary *)validityIntervalByTriggerType;

@end
