
@protocol PXRadarConfigurationProvider

@required

- (bool)includeAssetImages;
- (bool)includeAssetThumbnails;
- (PXRadarConfiguration *)radarConfiguration;

@end
