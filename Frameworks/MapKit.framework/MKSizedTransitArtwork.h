
@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {
    <GEOTransitArtworkDataSource> * _artwork;
    MKArtworkDataSourceCache * _artworkCache;
    long long  _fallbackShieldSize;
    long long  _shieldSize;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, retain) MKArtworkDataSourceCache *artworkCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fallbackShieldSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long shieldSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkCache;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;
- (long long)fallbackShieldSize;
- (unsigned long long)hash;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 fallbackShieldSize:(long long)arg3 artworkCache:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransitArtworkViewMode:(id)arg1;
- (void)setArtworkCache:(id)arg1;
- (long long)shieldSize;

@end
