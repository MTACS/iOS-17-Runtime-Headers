
@interface IMThreadSafeBalloonPluginMap : NSObject {
    NSObject<OS_dispatch_queue> * _dataQueue;
    NSMutableDictionary * _map;
    unsigned long long  _pluginCount;
}

@property (nonatomic, readonly) NSArray *allIdentifiers;
@property (nonatomic, readonly) NSArray *allPlugins;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic, readonly) NSDictionary *dictionaryMapCopy;
@property (nonatomic, retain) NSMutableDictionary *map;
@property (nonatomic, readonly) unsigned long long pluginCount;

- (void).cxx_destruct;
- (id)allIdentifiers;
- (id)allPlugins;
- (unsigned long long)count;
- (id)dataQueue;
- (id)dictionaryMapCopy;
- (id)initWithConcurrentDataQueue:(id)arg1;
- (id)map;
- (unsigned long long)pluginCount;
- (id)pluginForIdentifier:(id)arg1;
- (void)removePluginWithIdentifier:(id)arg1;
- (void)removePluginsWithIdentifiers:(id)arg1;
- (void)setMap:(id)arg1;
- (void)setPlugin:(id)arg1 forIdentifier:(id)arg2;
- (void)updateWithMap:(id)arg1;

@end
