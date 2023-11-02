
@protocol SCWDatabaseObserver

@required

- (void)database:(SCWDatabase *)arg1 didChangeZone:(NSString *)arg2 from:(id <SCWZoneReading>)arg3 to:(id <SCWZoneReading>)arg4;

@end
