
@protocol GDKTSDataRepresentationProtocol <NSSecureCoding, NSCopying>

@required

- (NSMeasurement *)averageSpeedInMetersPerSecond;
- (NSArray *)distanceBuckets;
- (NSMeasurement *)distanceInMeters;
- (NSArray *)distancePerRoadType;
- (NSArray *)distancePerTerrainType;
- (NSArray *)distancePerWeatherType;
- (NSArray *)distanceSpentAtRelativeSpeeds;
- (NSArray *)distanceSpentAtSpeedBuckets;
- (NSArray *)distanceSpentInTrafficBuckets;
- (NSMeasurement *)durationInSeconds;
- (NSMeasurement *)elevationGainInMeters;
- (NSDate *)endTime;
- (NSMeasurement *)expectedDurationInSecondsNoTraffic;
- (NSArray *)ktsSegmentIds;
- (NSArray *)lifeEventIds;
- (int)numAccelEvents;
- (int)numBrakingEvents;
- (int)numHighSpeedEvents;
- (NSMeasurement *)optimalUsageKwh;
- (NSDictionary *)roadDistancesInMeters;
- (NSDictionary *)roadRelativeSpeedBuckets;
- (NSDictionary *)roadSpeedBuckets;
- (NSDictionary *)roadTimes;
- (NSArray *)route;
- (double)score;
- (NSDate *)startTime;
- (NSArray *)timePerRoadType;
- (NSArray *)timePerTerrainType;
- (NSArray *)timePerWeatherType;
- (NSArray *)timeSpentAtRelativeSpeeds;
- (NSArray *)timeSpentAtSpeedBuckets;
- (NSArray *)timeSpentInTrafficBuckets;
- (NSMeasurement *)usageKwh;

@end
