
@interface GEONetworkEventFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)arg1;
- (id)initForReadWithFilePath:(id)arg1;
- (id)initForWriteWithFilePath:(id)arg1;
- (bool)unsafe_readNetworkEventDataWithVisitorBlock:(id /* block */)arg1;
- (bool)writeNetworkEventData:(id)arg1;

@end
