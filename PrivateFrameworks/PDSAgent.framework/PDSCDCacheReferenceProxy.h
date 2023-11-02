
@interface PDSCDCacheReferenceProxy : NSProxy {
    PDSCDCacheContainer * _cacheContainer;
    NSPersistentContainer * _persistentContainer;
}

@property (nonatomic, retain) PDSCDCacheContainer *cacheContainer;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)cacheContainer;
- (bool)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCacheContainer:(id)arg1 persistentContainer:(id)arg2;
- (id)persistentContainer;
- (void)setCacheContainer:(id)arg1;
- (void)setPersistentContainer:(id)arg1;

@end
