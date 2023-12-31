
@interface IMBalloonPluginAttributionController : NSObject {
    NSMutableDictionary * _bundleIDsDisplayingAttribution;
    NSMutableDictionary * _expiredBundleIDToTimestampMap;
    bool  _hasPerformedFirstAppExtensionLoad;
}

@property (nonatomic, retain) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic, retain) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (nonatomic) bool hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentTimestamp;
- (double)_expiryTimeout;
- (void)_handleInstalledPluginsChanged;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (id)bundleIDsDisplayingAttribution;
- (void)didShowAttributionForBundleIDs:(id)arg1;
- (id)expiredBundleIDToTimestampMap;
- (bool)hasPerformedFirstAppExtensionLoad;
- (id)init;
- (void)setBundleIDsDisplayingAttribution:(id)arg1;
- (void)setExpiredBundleIDToTimestampMap:(id)arg1;
- (void)setHasPerformedFirstAppExtensionLoad:(bool)arg1;
- (bool)shouldShowAttributionForBundleID:(id)arg1;
- (void)startExpiryTimer;

@end
