
@interface AXAuditPluginManager : NSObject {
    bool  __didLoadBundles;
}

@property (nonatomic) bool _didLoadBundles;

+ (id)sharedManager;

- (bool)_didLoadBundles;
- (void)_loadAuditBundle:(id)arg1;
- (void)loadAuditBundles;
- (id)platformPlugin;
- (id)pluginForAuditCategory:(id)arg1;
- (void)set_didLoadBundles:(bool)arg1;

@end
