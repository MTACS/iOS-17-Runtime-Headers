
@interface MPPlaceholderAVItem : MPAVItem <NSCopying> {
    NSString * _album;
    NSString * _artist;
    id /* block */  _artworkCatalogBlock;
    double  _durationFromExternalMetadata;
    bool  _explicitTrack;
    bool  _likeStateEnabled;
    NSString * _mainTitle;
    long long  _storeItemInt64ID;
    bool  _supportsLikedState;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic) double durationFromExternalMetadata;
@property (getter=isExplicitTrack, nonatomic) bool explicitTrack;
@property (getter=isLikedStateEnabled, nonatomic) bool likedStateEnabled;
@property (nonatomic, retain) NSString *mainTitle;
@property (nonatomic) long long storeItemInt64ID;
@property (nonatomic) bool supportsLikedState;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)isPlaceholder;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id /* block */)artworkCatalogBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)durationFromExternalMetadata;
- (id)init;
- (bool)isExplicitTrack;
- (bool)isLikedStateEnabled;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setDurationFromExternalMetadata:(double)arg1;
- (void)setExplicitTrack:(bool)arg1;
- (void)setLikedStateEnabled:(bool)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setStoreItemInt64ID:(long long)arg1;
- (void)setSupportsLikedState:(bool)arg1;
- (long long)storeItemInt64ID;
- (bool)supportsLikedState;
- (bool)supportsRateChange;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)mpcReporting_isValidReportingItem;

@end
