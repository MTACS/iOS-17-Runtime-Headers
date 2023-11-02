
@protocol ICCloudAvailability <NSObject>

@required

- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;

@end
