
@interface PUEditPluginManager : NSObject {
    unsigned long long  _mediaType;
    NSArray * _plugins;
}

@property (readonly) unsigned long long mediaType;
@property (nonatomic, copy) NSArray *plugins;

+ (id)sharedManagerForMediaType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_allowedPluginTypes;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (id)_initWithMediaType:(unsigned long long)arg1;
- (bool)hasMarkupPlugin;
- (bool)hasNonMarkupPlugins;
- (bool)hasPlugins;
- (unsigned long long)mediaType;
- (id)pluginActivities;
- (id)pluginActivitiesExceptMarkup;
- (id)plugins;
- (void)rediscoverAvailablePlugins;
- (void)setPlugins:(id)arg1;

@end
