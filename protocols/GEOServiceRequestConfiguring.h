
@protocol GEOServiceRequestConfiguring <NSObject>

@required

- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKindForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (NSString *)debugRequestName;
- (NSNumber *)serviceTypeNumber;
- (bool)supportsOffline;
- (unsigned long long)urlType;

@optional

- (NSArray *)additionalStatesForNetworkEvent;
- (int)analyticNetworkServiceTypeForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (unsigned long long)multipathServiceType;
- (GEOTaskQueue *)offlineTaskQueue;
- (double)timeout;
- (bool)usesBackgroundURL;

@end
