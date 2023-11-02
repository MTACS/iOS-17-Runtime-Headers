
@protocol _INPBEvent <NSObject>

@required

+ (Class)eventDescriptorsType;

- (void)addEventDescriptors:(_INPBString *)arg1;
- (void)clearEventDescriptors;
- (NSArray *)eventDescriptors;
- (_INPBString *)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDescriptorsCount;
- (_INPBString *)eventType;
- (bool)hasEventType;
- (void)setEventDescriptors:(NSArray *)arg1;
- (void)setEventType:(_INPBString *)arg1;

@end
