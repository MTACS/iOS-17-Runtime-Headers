
@protocol PLMomentData <PLMomentRefreshable, PLMomentProcessingProtocol, PLSharedAssetsContainer>

@required

+ (NSArray *)sortByTimeSortDescriptors;

- (float)aggregationScore;
- (double)approximateLatitude;
- (CLLocation *)approximateLocation;
- (double)approximateLongitude;
- (NSSet *)assets;
- (NSArray *)batchedAssets;
- (int)cachedCount;
- (int)cachedPhotosCount;
- (int)cachedVideosCount;
- (void)delete;
- (NSDate *)endDate;
- (double)gpsHorizontalAccuracy;
- (<PLPhotosHighlightData> *)highlight;
- (void)insertAssetData:(id <PLMomentAssetData>)arg1;
- (bool)isDeleted;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (short)originatorState;
- (unsigned short)processedLocation;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (NSDate *)representativeDate;
- (void)setAggregationScore:(float)arg1;
- (void)setApproximateLatitude:(double)arg1;
- (void)setApproximateLocation:(CLLocation *)arg1;
- (void)setApproximateLongitude:(double)arg1;
- (void)setAssets:(NSSet *)arg1;
- (void)setCachedCount:(int)arg1;
- (void)setCachedPhotosCount:(int)arg1;
- (void)setCachedVideosCount:(int)arg1;
- (void)setEndDate:(NSDate *)arg1;
- (void)setGpsHorizontalAccuracy:(double)arg1;
- (void)setOriginatorState:(short)arg1;
- (void)setProcessedLocation:(unsigned short)arg1;
- (void)setRepresentativeDate:(NSDate *)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setTimeZoneOffset:(int)arg1;
- (void)setUuid:(NSString *)arg1;
- (NSDate *)startDate;
- (int)timeZoneOffset;
- (NSObject<NSCopying> *)uniqueObjectID;
- (NSString *)uuid;

@optional

- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
