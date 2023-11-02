
@interface MKArtworkDataSourceCache : NSObject {
    NSCache * _artworkImageCache;
    MKTransitArtworkManager * _artworkManager;
}

@property (nonatomic, readonly) MKTransitArtworkManager *artworkManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (void)_shieldPackDidUpdate;
- (id)artworkManager;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5 widthPaddingMultiple:(double)arg6;
- (id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 nightMode:(bool)arg3;
- (id)initWithArtworkManager:(id)arg1;
- (void)purge;

@end
