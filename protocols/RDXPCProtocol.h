
@protocol RDXPCProtocol

@required

- (void)clearDataCache;
- (void)clearStatusSharedWithPeers;
- (void)createCacheDirAtPath:(NSString *)arg1;
- (void)ping;
- (void)shareStatusWithPeers;
- (void)update:(long long)arg1 withCountryCode:(NSString *)arg2;
- (void)update:(long long)arg1 withListOfCountryCodes:(NSArray *)arg2;
- (void)updatePeer:(NSString *)arg1 withCountryCode:(NSString *)arg2 priority:(int)arg3 andTimestamp:(NSDate *)arg4;
- (void)updatePeer:(NSString *)arg1 withEstimate:(RDEstimate *)arg2;

@end
