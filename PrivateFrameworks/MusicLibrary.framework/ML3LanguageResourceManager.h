
@interface ML3LanguageResourceManager : NSObject {
    ML3LanguageResources * _cachedResources;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) ML3LanguageResources *cachedResources;
@property (nonatomic, readonly) ML3LanguageResources *resources;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedResourceManager;

- (void).cxx_destruct;
- (id)_buildLanguageResources;
- (id)_init;
- (id)cachedResources;
- (void)invalidateCachedResources;
- (id)resources;
- (id)serialQueue;
- (void)setCachedResources:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
