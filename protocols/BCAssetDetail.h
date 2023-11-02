
@protocol BCAssetDetail <BCCloudData>

@required

- (NSString *)assetID;
- (double)bookmarkTime;
- (NSDate *)dateFinished;
- (NSDate *)datePlaybackTimeUpdated;
- (bool)isFinished;
- (NSDate *)lastOpenDate;
- (bool)notFinished;
- (int)readingPositionAbsolutePhysicalLocation;
- (NSString *)readingPositionAnnotationVersion;
- (NSString *)readingPositionAssetVersion;
- (NSString *)readingPositionCFIString;
- (int)readingPositionLocationRangeEnd;
- (int)readingPositionLocationRangeStart;
- (NSDate *)readingPositionLocationUpdateDate;
- (NSString *)readingPositionStorageUUID;
- (NSData *)readingPositionUserData;
- (float)readingProgress;
- (float)readingProgressHighWaterMark;
- (short)taste;
- (short)tasteSyncedToStore;

@end
