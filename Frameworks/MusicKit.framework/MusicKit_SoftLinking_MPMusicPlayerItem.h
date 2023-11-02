
@interface MusicKit_SoftLinking_MPMusicPlayerItem : NSObject {
    NSString * _albumTitle;
    NSString * _artistName;
    <MusicKit_SoftLinking_MPArtworkCatalog> * _artworkCatalog;
    NSNumber * _discNumber;
    NSNumber * _duration;
    NSString * _genreIdentifier;
    NSString * _genreName;
    NSNumber * _has4K;
    NSNumber * _hasHDR;
    NSString * _identifier;
    bool  _isExplicit;
    bool  _isMusicVideo;
    NSDictionary * _playParametersDictionary;
    NSDate * _releaseDate;
    NSString * _subtitle;
    NSString * _title;
    NSNumber * _trackNumber;
    MusicKit_SoftLinking_CatalogID * _underlyingItemCatalogID;
    NSString * _underlyingItemLibraryID;
}

@property (nonatomic, readonly, copy) NSString *albumTitle;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPArtworkCatalog> *artworkCatalog;
@property (nonatomic, readonly, copy) NSNumber *discNumber;
@property (nonatomic, readonly, copy) NSNumber *duration;
@property (nonatomic, readonly, copy) NSString *genreIdentifier;
@property (nonatomic, readonly, copy) NSString *genreName;
@property (nonatomic, readonly, copy) NSNumber *has4K;
@property (nonatomic, readonly, copy) NSNumber *hasHDR;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly) bool isMusicVideo;
@property (nonatomic, readonly, copy) NSDictionary *playParametersDictionary;
@property (nonatomic, readonly, copy) NSDate *releaseDate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSNumber *trackNumber;
@property (nonatomic, readonly) MusicKit_SoftLinking_CatalogID *underlyingItemCatalogID;
@property (nonatomic, readonly) NSString *underlyingItemLibraryID;

+ (id)playerItemForMediaItem:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithMediaItem:(id)arg1;
- (void)_initializeAdditionalAttributesWithMediaItem:(id)arg1;
- (void)_initializeArtworkCatalogWithMediaItem:(id)arg1;
- (void)_initializeBasicPropertiesWithMediaItem:(id)arg1;
- (id)albumTitle;
- (id)artistName;
- (id)artworkCatalog;
- (id)description;
- (id)discNumber;
- (id)duration;
- (id)genreIdentifier;
- (id)genreName;
- (id)has4K;
- (id)hasHDR;
- (id)identifier;
- (bool)isExplicit;
- (bool)isMusicVideo;
- (id)playParametersDictionary;
- (id)releaseDate;
- (id)subtitle;
- (id)title;
- (id)trackNumber;
- (id)underlyingItemCatalogID;
- (id)underlyingItemLibraryID;

@end
