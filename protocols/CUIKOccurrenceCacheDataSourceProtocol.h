
@protocol CUIKOccurrenceCacheDataSourceProtocol <NSObject>

@required

- (long long)cachedDayCount;
- (EKEvent *)cachedOccurrenceAtIndexPath:(NSIndexPath *)arg1;
- (bool)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (NSDate *)dateAtDayIndex:(long long)arg1;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)fetchDaysStartingFromSection:(long long)arg1 sectionsToLoadInBothDirections:(long long)arg2;
- (NSArray *)indexPathsForOccurrence:(EKEvent *)arg1;
- (id)initWithEventStore:(EKEventStore *)arg1 calendars:(NSSet *)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(NSString *)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(NSDate *)arg1;
- (void)stopSearching;
- (bool)supportsFakeTodaySection;
- (bool)supportsInvitations;

@end
