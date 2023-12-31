
@protocol CADAlarmEngineInterface

@required

- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(void *)arg1 toEnd:(void *)arg2 inCalendars:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSDate *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetAlarmWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*

@end
