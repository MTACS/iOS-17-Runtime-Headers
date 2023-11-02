
@interface EspressoSharedKernelCacheEntry : NSObject {
    EspressoMetalKernelsCache * _cached;
}

@property EspressoMetalKernelsCache *cached;

- (void).cxx_destruct;
- (id)cached;
- (void)setCached:(id)arg1;

@end
