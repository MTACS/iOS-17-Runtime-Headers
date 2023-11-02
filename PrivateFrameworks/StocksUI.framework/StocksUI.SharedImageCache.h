
@interface StocksUI.SharedImageCache : _TtCs12_SwiftObject <TSSharedImageCacheType> {
    void memoryCache;
}

- (void)cache:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 forKey:(id)arg2 immediately:(bool)arg3;
- (id)fetchImageForKey:(id)arg1;
- (void)pruneImagesOlderThan:(double)arg1;

@end
