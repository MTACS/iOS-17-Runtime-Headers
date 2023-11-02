
@protocol CADCalendarItemInterface

@required

- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseExportICSForCalendarItemWithID:(void *)arg1 occurrenceDate:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: CADObjectID *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(void *)arg1 entityType:(void *)arg2 fetchIdentifier:(void *)arg3 synchronous:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSPredicate *, int, int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetAlarmWithExternalID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetCalendarItemWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetCalendarItemsWithUUIDs:(void *)arg1 inCalendars:(void *)arg2 propertiesToLoad:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(void *)arg1 inCalendar:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*

@end
