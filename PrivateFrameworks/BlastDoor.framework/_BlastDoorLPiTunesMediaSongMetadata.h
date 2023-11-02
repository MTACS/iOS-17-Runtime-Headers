
@interface _BlastDoorLPiTunesMediaSongMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _album;
    NSString * _artist;
    _BlastDoorLPImage * _artwork;
    _BlastDoorLPArtworkMetadata * _artworkMetadata;
    _BlastDoorLPLyricExcerptMetadata * _lyricExcerpt;
    NSString * _lyrics;
    NSString * _name;
    NSArray * _offers;
    NSURL * _previewURL;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) _BlastDoorLPImage *artwork;
@property (nonatomic, copy) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) _BlastDoorLPLyricExcerptMetadata *lyricExcerpt;
@property (nonatomic, copy) NSString *lyrics;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSURL *previewURL;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)album;
- (id)artist;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lyricExcerpt;
- (id)lyrics;
- (id)name;
- (id)offers;
- (id)previewURL;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setLyricExcerpt:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
