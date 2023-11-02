
@protocol HMBLocalDatabaseDelegate <NSObject>

@optional

- (void)localDatabase:(HMBLocalDatabase *)arg1 detectedLocalCorruptionWithInfo:(NSDictionary *)arg2;
- (void)localDatabase:(HMBLocalDatabase *)arg1 willRemoveZoneWithID:(id <HMBLocalZoneID>)arg2;

@end
