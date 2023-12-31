
@interface GEOSearchAttributionManifestManager : NSObject {
    <GEOSearchAttributionServerProxy> * _serverProxy;
}

@property (nonatomic, readonly) <GEOSearchAttributionServerProxy> *serverProxy;

+ (void)setUseLocalProxy:(bool)arg1;
+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverProxy;

@end
