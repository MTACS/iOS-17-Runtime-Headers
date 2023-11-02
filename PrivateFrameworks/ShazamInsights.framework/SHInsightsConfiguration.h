
@interface SHInsightsConfiguration : NSObject {
    SHBagContract * _bagContract;
}

@property (nonatomic, readonly) double artistsCachedDataMaxAge;
@property (nonatomic, readonly) bool artistsEnabled;
@property (nonatomic, readonly) SHBagContract *bagContract;
@property (nonatomic, readonly) long long maxGeoChartsGeohashLength;
@property (nonatomic, readonly) long long minGeoChartsGeohashLength;
@property (nonatomic, readonly) double tracksCachedDataMaxAge;
@property (nonatomic, readonly) bool tracksEnabled;

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (double)artistsCachedDataMaxAge;
- (id)artistsClusterEndpoint;
- (bool)artistsEnabled;
- (id)bagContract;
- (id)geoChartsEndpointForDate:(id)arg1 geoHash:(id)arg2;
- (id)init;
- (id)initWithBagContract:(id)arg1;
- (long long)maxGeoChartsGeohashLength;
- (long long)minGeoChartsGeohashLength;
- (id)tokenizedURLForBagPathKey:(id)arg1;
- (double)tracksCachedDataMaxAge;
- (id)tracksClusterEndpointForStorefront:(id)arg1;
- (bool)tracksEnabled;

@end
