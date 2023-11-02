
@protocol _INPBEventList <NSObject>

@required

+ (Class)eventType;

- (void)addEvent:(_INPBEvent *)arg1;
- (void)clearEvents;
- (_INPBCondition *)condition;
- (_INPBEvent *)eventAtIndex:(unsigned long long)arg1;
- (NSArray *)events;
- (unsigned long long)eventsCount;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setEvents:(NSArray *)arg1;

@end
