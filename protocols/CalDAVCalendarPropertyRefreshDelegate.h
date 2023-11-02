
@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)calendarRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithNewCTags:(NSDictionary *)arg2 newSyncTokens:(NSDictionary *)arg3 calendarHomeSyncToken:(NSString *)arg4 updatedCalendars:(NSSet *)arg5 error:(NSError *)arg6;

@optional

- (void)calendarRefreshFoundDeletedContainerURL:(NSURL *)arg1;
- (void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(CalDAVContainer *)arg1;
- (void)calendarRefreshFoundUpdatedSpecialContainer:(CalDAVContainer *)arg1;
- (void)calendarRefreshMkCalendarSucceededForPrincipal:(id <CalDAVPrincipal>)arg1 calendar:(id <CalDAVCalendar>)arg2;
- (void)calendarRefreshPropPatchFinishedWithError:(NSError *)arg1 forCalendar:(id <CalDAVCalendar>)arg2;
- (bool)calendarRefreshShouldRetryMkCalendarForPrincipal:(id <CalDAVPrincipal>)arg1 calendar:(id <CalDAVCalendar>)arg2 error:(NSError *)arg3;
- (void)calendarRefreshWillRefreshCalendar:(id <CalDAVCalendar>)arg1;
- (void)calendarRefreshWillSendCalendarDeletes:(CalDAVCalendarPropertyRefreshOperation *)arg1;

@end
