
@protocol MKFCalendarEvent <MKFEvent, MKFCalendarEventPublicExtensions>

@required

- (MKFCalendarEventDatabaseID *)databaseID;
- (NSDateComponents *)fireDateComponents;
- (<MKFHome> *)home;
- (void)setFireDateComponents:(NSDateComponents *)arg1;

@end
