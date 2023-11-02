
@protocol PXConfigurableFeedSectionInfosManager

@required

- (NSDate *)earliestDate;
- (long long)entryFilter;
- (unsigned long long)fetchLimit;
- (void)setEarliestDate:(NSDate *)arg1;
- (void)setEntryFilter:(long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;

@end
