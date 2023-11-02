
@protocol MKFSignificantTimeEvent <MKFEvent, MKFSignificantTimeEventPublicExtensions>

@required

- (MKFSignificantTimeEventDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSNumber *)offsetSeconds;
- (void)setOffsetSeconds:(NSNumber *)arg1;
- (void)setSignificantEvent:(NSString *)arg1;
- (NSString *)significantEvent;

@end
