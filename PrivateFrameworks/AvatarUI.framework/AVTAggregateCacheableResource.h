
@interface AVTAggregateCacheableResource : NSObject <AVTCacheableResource> {
    NSArray * _cacheableResources;
}

@property (nonatomic, readonly) NSArray *cacheableResources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheableResources;
- (unsigned long long)costForScope:(id)arg1;
- (id)identifierForScope:(id)arg1 persistent:(bool)arg2;
- (id)initWithCacheableResources:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (bool)requiresEncryption;
- (id)volatileIdentifierForScope:(id)arg1;

@end
