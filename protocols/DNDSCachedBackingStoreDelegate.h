
@protocol DNDSCachedBackingStoreDelegate <DNDSBackingStoreDelegate>

@required

- (void)cachedBackingStoreDidPurgeCache:(id <DNDSCachedBackingStore>)arg1;

@end
