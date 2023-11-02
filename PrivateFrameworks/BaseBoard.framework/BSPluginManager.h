
@interface BSPluginManager : NSObject {
    NSBundle * _bundle;
    NSArray * _pluginBundles;
    NSString * _pluginDirectory;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSArray *pluginBundles;
@property (nonatomic, readonly, copy) NSString *pluginDirectory;

+ (id)mainManager;

- (void).cxx_destruct;
- (id)bundle;
- (id)description;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (id)pluginBundles;
- (id)pluginBundlesForType:(id)arg1;
- (id)pluginDirectory;

@end
