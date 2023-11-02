
@protocol DNDSCachedBackingStore <DNDSBackingStore>

@required

- (<DNDSCachedBackingStoreDelegate> *)delegate;
- (void)purgeCache;
- (void)setDelegate:(id <DNDSCachedBackingStoreDelegate>)arg1;

@end
