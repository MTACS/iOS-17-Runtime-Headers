
@protocol CADCalendarInterface

@required

- (void)CADCalendar:(void *)arg1 hasEvents:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADCalendar:(void *)arg1 hasEventsWithRoomAsAttendee:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*

@end
