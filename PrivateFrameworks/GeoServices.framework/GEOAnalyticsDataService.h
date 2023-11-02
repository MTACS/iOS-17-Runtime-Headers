
@interface GEOAnalyticsDataService : NSObject <GEOAnalyticsDataServiceProxy> {
    <GEOAnalyticsDataServiceProxy> * _proxyObj;
}

+ (id)sharedService;
+ (void)useLocalProxy;

- (void).cxx_destruct;
- (id)initWithProxyClass:(Class)arg1;
- (int)networkEventFileDescriptorForRepresentativeDate:(id)arg1;
- (int)requestResponseMetadataFileDescriptorForBatchID:(unsigned long long)arg1;

@end
