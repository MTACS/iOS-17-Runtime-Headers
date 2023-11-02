
@protocol _SFPBCreateCalendarEventCommand <NSObject>

@required

- (_SFPBCalendarEvent *)event;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setEvent:(_SFPBCalendarEvent *)arg1;

@end
