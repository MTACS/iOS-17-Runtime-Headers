
@protocol _CPUsageEnvelope <NSObject>

@required

- (long long)collectionEndTimestamp;
- (long long)collectionStartTimestamp;
- (int)configuredLookbackTimeInDays;
- (_CPDeviceContext *)context;
- (_CPImagesUsagePropensity *)imagesUsagePropensity;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPNewsUsagePropensity *)newsUsagePropensity;
- (_CPSafariUsagePropensity *)safariUsagePropensity;
- (void)setCollectionEndTimestamp:(long long)arg1;
- (void)setCollectionStartTimestamp:(long long)arg1;
- (void)setConfiguredLookbackTimeInDays:(int)arg1;
- (void)setContext:(_CPDeviceContext *)arg1;
- (void)setImagesUsagePropensity:(_CPImagesUsagePropensity *)arg1;
- (void)setNewsUsagePropensity:(_CPNewsUsagePropensity *)arg1;
- (void)setSafariUsagePropensity:(_CPSafariUsagePropensity *)arg1;
- (void)setSpotlightUsagePropensity:(_CPSpotlightUsagePropensity *)arg1;
- (void)setTotalSessions:(int)arg1;
- (void)setUsageSinceLookback:(_CPUsageSinceLookback *)arg1;
- (void)setUuidBytes:(NSData *)arg1;
- (_CPSpotlightUsagePropensity *)spotlightUsagePropensity;
- (int)totalSessions;
- (_CPUsageSinceLookback *)usageSinceLookback;
- (NSData *)uuidBytes;
- (unsigned long long)whichKind;

@end
