
@protocol FCNetworkSession <NSObject>

@required

- (long long)cellularRadioAccessTechnology;
- (NSDate *)endDate;
- (NSArray *)eventGroups;
- (NSData *)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (NSDate *)startDate;
- (unsigned long long)totalFailureCount;
- (unsigned long long)totalSuccessCount;
- (bool)wifiReachable;

@end
