
@protocol SFCreateCalendarEventCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFCalendarEvent *)event;
- (NSData *)jsonData;
- (void)setEvent:(SFCalendarEvent *)arg1;

@end
