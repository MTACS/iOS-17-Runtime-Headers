
@interface WebPluginDatabase : NSObject {
    NSArray * plugInPaths;
    NSMutableSet * pluginInstanceViews;
    NSMutableDictionary * plugins;
    NSMutableSet * registeredMIMETypes;
}

+ (id)_defaultPlugInPaths;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;

- (void)_addPlugin:(id)arg1;
- (id)_plugInPaths;
- (void)_removePlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)addPluginInstanceView:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)destroyAllPluginInstanceViews;
- (id)init;
- (bool)isMIMETypeRegistered:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (id)plugins;
- (void)refresh;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)setPlugInPaths:(id)arg1;

@end
