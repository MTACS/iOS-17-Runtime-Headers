
@interface VUIFeaturesConfiguration : NSObject {
    VUIAccountConfig * _accountConfig;
    VUIAccountMessageConfig * _accountMessageConfig;
    VUIAutoPlayConfig * _autoPlayConfig;
    NSMutableDictionary * _cachedConfigDictionary;
    VUICanonicalConfig * _canonicalConfig;
    VUIDownloadConfig * _downloadConfig;
    VUIDropOnTabConfig * _dropOnTabConfig;
    VUILaunchConfig * _launchConfig;
    VUILibConfig * _libConfig;
    VUILiveLinkConfig * _liveLinkConfig;
    VUIMediaShowcasingConfig * _mediaShowcaseConfig;
    VUIMultiviewConfig * _multiviewConfig;
    VUINowPlayingConfig * _nowPlayingConfig;
    VUIPlaybackUpNextConfig * _playbackUpNextConfig;
    VUIRootControllerConfig * _rootControllerConfig;
    VUISyndicationConfig * _syndicationConfig;
    VUITabItemsUpdateConfig * _tabItemsUpdateConfig;
    VUIUpNextConfig * _upNextConfig;
}

@property (nonatomic, readonly) VUIAccountConfig *accountConfig;
@property (nonatomic, readonly) VUIAccountMessageConfig *accountMessageConfig;
@property (nonatomic, readonly) VUIAutoPlayConfig *autoPlayConfig;
@property (nonatomic, retain) NSMutableDictionary *cachedConfigDictionary;
@property (nonatomic, readonly) VUICanonicalConfig *canonicalConfig;
@property (nonatomic, readonly) VUIDownloadConfig *downloadConfig;
@property (nonatomic, readonly) VUIDropOnTabConfig *dropOnTabConfig;
@property (nonatomic, readonly) VUILaunchConfig *launchConfig;
@property (nonatomic, readonly) VUILibConfig *libConfig;
@property (nonatomic, readonly) VUILiveLinkConfig *liveLinkConfig;
@property (nonatomic, readonly) VUIMediaShowcasingConfig *mediaShowcaseConfig;
@property (nonatomic, readonly) VUIMultiviewConfig *multiviewConfig;
@property (nonatomic, readonly) VUINowPlayingConfig *nowPlayingConfig;
@property (nonatomic, readonly) VUIPlaybackUpNextConfig *playbackUpNextConfig;
@property (nonatomic, readonly) VUIRootControllerConfig *rootControllerConfig;
@property (nonatomic, readonly) VUISyndicationConfig *syndicationConfig;
@property (nonatomic, readonly) VUITabItemsUpdateConfig *tabItemsUpdateConfig;
@property (nonatomic, readonly) VUIUpNextConfig *upNextConfig;

+ (bool)boolValueForKey:(id)arg1 fromDictionary:(id)arg2 defaultValue:(bool)arg3;
+ (id)defaultsNumberValueForKey:(id)arg1;
+ (id)defaultsStringValueForKey:(id)arg1;
+ (id)numberValueForKey:(id)arg1 fromDictionary:(id)arg2;
+ (id)sharedInstance;
+ (id)stringValueForKey:(id)arg1 fromDictionary:(id)arg2;

- (void).cxx_destruct;
- (void)_cacheFeatureConfiguration:(id)arg1;
- (id)_cachePath;
- (void)_populateAccountConfig:(id)arg1;
- (void)_populateAccountMessageConfig:(id)arg1;
- (void)_populateCanonicalConfig:(id)arg1;
- (void)_populateConfigWithDictionary:(id)arg1;
- (void)_populateLaunchConfig:(id)arg1;
- (void)_populateLibConfig:(id)arg1;
- (void)_populateMediaShowcaseConfig:(id)arg1;
- (void)_populateMultiviewConfig:(id)arg1;
- (void)_populateRootControllerConfig:(id)arg1;
- (void)_populateTabItemsUpdateConfig:(id)arg1;
- (void)_updateFromCache;
- (void)_updateTVSettingsIfNeeded:(bool)arg1;
- (id)accountConfig;
- (id)accountMessageConfig;
- (id)autoPlayConfig;
- (id)cachedConfigDictionary;
- (id)canonicalConfig;
- (id)downloadConfig;
- (id)dropOnTabConfig;
- (id)init;
- (id)launchConfig;
- (id)libConfig;
- (id)liveLinkConfig;
- (id)mediaShowcaseConfig;
- (id)multiviewConfig;
- (id)nowPlayingConfig;
- (void)parseUpNextConfig:(id)arg1;
- (id)playbackUpNextConfig;
- (id)rootControllerConfig;
- (void)setCachedConfigDictionary:(id)arg1;
- (id)syndicationConfig;
- (id)tabItemsUpdateConfig;
- (id)upNextConfig;
- (void)updateWithDictionary:(id)arg1;

@end
