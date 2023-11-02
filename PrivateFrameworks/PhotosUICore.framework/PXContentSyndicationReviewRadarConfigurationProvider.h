
@interface PXContentSyndicationReviewRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>

@property (nonatomic, readonly) bool includeAssetImages;
@property (nonatomic, readonly) bool includeAssetThumbnails;
@property (nonatomic, readonly) PXRadarConfiguration *radarConfiguration;

- (bool)includeAssetImages;
- (bool)includeAssetThumbnails;
- (id)radarConfiguration;

@end
