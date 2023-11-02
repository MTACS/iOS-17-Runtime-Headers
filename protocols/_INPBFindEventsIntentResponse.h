
@protocol _INPBFindEventsIntentResponse <NSObject>

@required

+ (Class)eventsType;

- (void)addEvents:(_INPBCalendarEvent *)arg1;
- (void)clearEvents;
- (NSArray *)events;
- (_INPBCalendarEvent *)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)setEvents:(NSArray *)arg1;

@end
