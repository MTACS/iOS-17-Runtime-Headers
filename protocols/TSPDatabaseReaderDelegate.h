
@protocol TSPDatabaseReaderDelegate <TSPReaderDelegate>

@required

- (TSPData *)databaseReader:(TSPDatabaseReader *)arg1 wantsDataForAppRelativePath:(NSString *)arg2 filename:(NSString *)arg3;
- (TSPData *)databaseReader:(TSPDatabaseReader *)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(NSString *)arg3;

@end
