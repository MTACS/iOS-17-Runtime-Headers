
@interface IMBalloonPluginManagerModel : NSObject {
    NSObject<OS_dispatch_queue> * _dataQueue;
    id  _extensionMatchingContext;
    bool  _hasCompletedInitialization;
    bool  _hasDeferredInstalledAppsChangedNotification;
    id  _highMemoryExtensionMatchingContext;
    NSDictionary * _pluginIDToMetadataCache;
    NSString * _pluginMetaDataFolder;
    IMThreadSafeBalloonPluginMap * _pluginsMap;
    NSSet * _pluginsToRemoveAfterExtensionsUpdate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic) bool hasCompletedInitialization;
@property (nonatomic) bool hasDeferredInstalledAppsChangedNotification;
@property (nonatomic, retain) id highMemoryExtensionMatchingContext;
@property (nonatomic, retain) NSDictionary *pluginIDToMetadataCache;
@property (nonatomic, retain) NSString *pluginMetaDataFolder;
@property (nonatomic, readonly) IMThreadSafeBalloonPluginMap *pluginsMap;
@property (nonatomic, retain) NSSet *pluginsToRemoveAfterExtensionsUpdate;

- (void).cxx_destruct;
- (id)dataQueue;
- (id)extensionMatchingContext;
- (bool)hasCompletedInitialization;
- (bool)hasDeferredInstalledAppsChangedNotification;
- (id)highMemoryExtensionMatchingContext;
- (id)init;
- (id)pluginIDToMetadataCache;
- (id)pluginMetaDataFolder;
- (id)pluginsMap;
- (id)pluginsToRemoveAfterExtensionsUpdate;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setHasCompletedInitialization:(bool)arg1;
- (void)setHasDeferredInstalledAppsChangedNotification:(bool)arg1;
- (void)setHighMemoryExtensionMatchingContext:(id)arg1;
- (void)setPluginIDToMetadataCache:(id)arg1;
- (void)setPluginMetaDataFolder:(id)arg1;
- (void)setPluginsToRemoveAfterExtensionsUpdate:(id)arg1;

@end
