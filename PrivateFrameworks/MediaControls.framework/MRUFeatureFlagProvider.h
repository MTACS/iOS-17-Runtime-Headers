
@interface MRUFeatureFlagProvider : NSObject

+ (bool)isArtworkControllerEnabled;
+ (bool)isAutobahnEnabled;
+ (bool)isDominoAttentionEnabled;
+ (bool)isDynamicCoversheetEnabled;
+ (bool)isFavoritesEnabled;
+ (bool)isImageCachingEnabled;
+ (bool)isMediaSuggestionsPushEnabled;
+ (bool)isNewVolumeControlsMediaControlsEnabled;
+ (bool)isPlatterLiveWaveformEnabled;
+ (bool)isQuickControlsLiveWaveformEnabled;
+ (bool)isRelativeVolumeUIEnabled;
+ (bool)isRoutePickerNotCollapseGroupAutomaticallyEnabled;
+ (bool)isSpatialOnAggregateDevices;
+ (bool)isVolumeInputControlCenterEnabled;

@end
