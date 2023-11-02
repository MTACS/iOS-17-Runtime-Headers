
@interface CLSSocialServiceCalendar : CLSSocialService {
    CLSCalendarEventsCache * _calendarEventsCache;
    CNContactStore * _contactStore;
    CNContact * _meContact;
    NSMutableSet * _prefetchedDateIntervals;
}

+ (bool)_isCalendarRelevant:(id)arg1;
+ (bool)_isEventInMeetingRoom:(id)arg1;
+ (bool)eventAtLocation:(id)arg1 withAttendeeNames:(id)arg2 matchesClueCollection:(id)arg3;
+ (id)relevantCalendars:(id)arg1;
+ (bool)shouldKeepEvent:(id)arg1 withClueCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateEventsFromDate:(id)arg1 toDate:(id)arg2 fetchIfNeeded:(bool)arg3 usingBlock:(id /* block */)arg4;
- (id)_fullNameWithContact:(id)arg1;
- (bool)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2;
- (bool)_sortedAssetCollections:(id)arg1 containsEvent:(id)arg2;
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)eventFromProxyEvent:(id)arg1;
- (id)eventsForClueCollection:(id)arg1;
- (id)eventsForDates:(id)arg1;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (void)invalidateMemoryCaches;
- (id)meContact;
- (id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(bool)arg2;
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3;

@end
