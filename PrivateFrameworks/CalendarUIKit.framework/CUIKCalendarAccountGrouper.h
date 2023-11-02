
@interface CUIKCalendarAccountGrouper : NSObject

+ (id)_groupForCustomGroupType:(unsigned long long)arg1 inMap:(id)arg2;
+ (id)_groupForSource:(id)arg1 inMap:(id)arg2;
+ (void)_insertStore:(id)arg1 intoByGroupArray:(id)arg2;
+ (void)_populateGroups:(id)arg1 forNonDelegateSources:(id)arg2;
+ (id)calendarsLimitedToSource:(id)arg1 writability:(long long)arg2 onlyUnmanagedAccounts:(bool)arg3 forEvent:(id)arg4 entityType:(unsigned long long)arg5 inEventStore:(id)arg6;
+ (id)calendarsLimitedToSource:(id)arg1 writability:(long long)arg2 onlyUnmanagedAccounts:(bool)arg3 forEvents:(id)arg4 entityType:(unsigned long long)arg5 inEventStore:(id)arg6;
+ (id)generateGroupsForCalendars:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 forMode:(long long)arg4 usingBackgroundColor:(id)arg5 includingAccountsWithoutCalendars:(bool)arg6 filterByFocus:(bool)arg7 usingUnselectedCalendars:(id)arg8 foundRefreshableCalendar:(bool*)arg9 anyGroupsHiddenByFocus:(bool*)arg10 numberOfCalendarsHiddenByFocus:(long long*)arg11;

@end
