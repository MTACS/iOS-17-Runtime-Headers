
@interface _BlastDoorLPiTunesMediaAudioBookMetadata : _BlastDoorLPSpecializationMetadata {
    _BlastDoorLPImage * _artwork;
    _BlastDoorLPArtworkMetadata * _artworkMetadata;
    NSString * _author;
    NSString * _name;
    NSString * _narrator;
    NSURL * _previewURL;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) _BlastDoorLPImage *artwork;
@property (nonatomic, copy) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *narrator;
@property (nonatomic, copy) NSURL *previewURL;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)artwork;
- (id)artworkMetadata;
- (id)author;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)narrator;
- (id)previewURL;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNarrator:(id)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
