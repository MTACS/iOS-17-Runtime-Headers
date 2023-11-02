
@interface STSPluginLoader : NSObject {
    NSCache * _pluginCache;
}

@property (nonatomic, retain) NSCache *pluginCache;

- (void).cxx_destruct;
- (id)init;
- (id)pluginCache;
- (id)pluginWithName:(id)arg1;
- (void)setPluginCache:(id)arg1;

@end
