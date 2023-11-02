
@interface FASettingPresetsCache : NSObject <FASettingPresetsCacheProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cacheQueue;

- (id)_cacheDirectoryURLWithError:(id*)arg1;
- (id)_cacheURL;
- (id)_cacheURLWithError:(id*)arg1;
- (id)_createCacheFile;
- (id)_fetchData:(id*)arg1;
- (id)invalidate;
- (id)load:(id*)arg1;
- (id)loadForURL:(id)arg1;
- (id)updateWithPresets:(id)arg1 requestURL:(id)arg2;

@end
