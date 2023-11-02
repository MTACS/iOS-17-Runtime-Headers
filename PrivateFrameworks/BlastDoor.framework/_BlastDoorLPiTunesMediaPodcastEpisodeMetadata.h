
@interface _BlastDoorLPiTunesMediaPodcastEpisodeMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _artist;
    _BlastDoorLPImage * _artwork;
    _BlastDoorLPArtworkMetadata * _artworkMetadata;
    NSString * _episodeName;
    NSArray * _offers;
    NSString * _podcastName;
    NSDate * _releaseDate;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) _BlastDoorLPImage *artwork;
@property (nonatomic, copy) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *episodeName;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSString *podcastName;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)artist;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offers;
- (id)podcastName;
- (id)releaseDate;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setEpisodeName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPodcastName:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
