
@protocol BCReadingNowDetail <BCCloudData>

@required

- (NSString *)assetID;
- (NSString *)cloudAssetType;
- (bool)isTrackedAsRecent;
- (NSDate *)lastEngagedDate;

@end
