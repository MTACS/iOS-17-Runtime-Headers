
@protocol GEOConfigStorageExpiry

@required

- (void)clearConfigKeyExpiry:(NSString *)arg1;
- (NSDictionary *)getAllExpiringKeys;
- (bool)getConfigKeyExpiry:(NSString *)arg1 date:(id*)arg2 osVersion:(id*)arg3;
- (bool)getConfigKeyIsExpired:(NSString *)arg1;
- (void)resync;
- (void)setConfigKeyExpiry:(NSString *)arg1 date:(NSDate *)arg2 osVersion:(NSString *)arg3;

@end
