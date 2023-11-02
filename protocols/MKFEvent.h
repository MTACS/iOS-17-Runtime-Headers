
@protocol MKFEvent <MKFModel, MKFEventPublicExtensions>

@required

- (MKFEventDatabaseID *)databaseID;
- (NSNumber *)endEvent;
- (<MKFHome> *)home;
- (void)setEndEvent:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (<MKFEventTrigger> *)trigger;
- (NSDate *)writerTimestamp;

@end
