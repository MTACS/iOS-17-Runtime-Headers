
@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {
    NSMutableArray * _completionHandlers;
    NSDictionary * _networkDefaults;
    geo_isolater * _networkDefaultsIsolation;
    <_GEONetworkDefaultsServerProxy> * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setUseLocalProxy:(bool)arg1;
+ (id)sharedNetworkDefaults;
+ (bool)useLocalProxy;

- (void).cxx_destruct;
- (id)allKeys;
- (void)allKeysAndValues:(id /* block */)arg1;
- (id)init;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)valueForKey:(id)arg1;

@end
