
@interface __NSBundleTables : NSObject {
    NSMapTable * _bundleForClassMap;
    NSPointerArray * _immortalBundles;
    NSHashTable * _loadedBundles;
    NSHashTable * _loadedFrameworks;
    NSLock * _lock;
    NSMapTable * _resolvedPathToBundles;
    NSHashTable * _staticFrameworks;
}

- (void)dealloc;
- (id)init;

@end
