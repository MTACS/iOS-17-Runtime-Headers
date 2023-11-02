
@protocol MKFDurationEvent <MKFEvent, MKFDurationEventPublicExtensions>

@required

- (MKFDurationEventDatabaseID *)databaseID;
- (NSNumber *)duration;
- (<MKFHome> *)home;
- (void)setDuration:(NSNumber *)arg1;

@end
