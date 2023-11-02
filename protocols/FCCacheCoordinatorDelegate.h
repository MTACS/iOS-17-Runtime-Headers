
@protocol FCCacheCoordinatorDelegate <NSObject>

@required

- (void)cacheCoordinator:(FCCacheCoordinator *)arg1 flushKeysWithWriteLock:(NSSet *)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(FCCacheCoordinator *)arg1;

@optional

- (unsigned long long)cacheCoordinatorPreemptiveFlushSize:(FCCacheCoordinator *)arg1;

@end
