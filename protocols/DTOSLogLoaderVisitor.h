
@protocol DTOSLogLoaderVisitor

@required

- (void)addPidToExecEntriesFromMapping:(XRIntKeyedDictionary *)arg1;
- (NSError *)failureReason;
- (bool)isFetchComplete;
- (unsigned long long)lastMachContinuousTime;
- (unsigned int)lostEventsSinceLastVisit;
- (NSData *)nextOutputBytes;
- (void)setFailureReason:(NSError *)arg1;
- (void)setFetchComplete:(bool)arg1;
- (void)setLastMachContinuousTime:(unsigned long long)arg1;
- (void)setLostEventsSinceLastVisit:(unsigned int)arg1;
- (void)setNextOutputBytes:(NSData *)arg1;

@end
