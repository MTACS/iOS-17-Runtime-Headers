
@protocol SCKDatabaseObserver

@required

- (void)database:(SCKDatabase *)arg1 didChangeZone:(NSString *)arg2 from:(id <SCKZoneReading>)arg3 to:(id <SCKZoneReading>)arg4;

@end
