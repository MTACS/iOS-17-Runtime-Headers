
@interface _SFPBMediaMetadata : PBCodable <NSSecureCoding, _SFPBMediaMetadata> {
    NSString * _albumName;
    NSString * _artistName;
    NSArray * _bundleIdentifiersToExcludes;
    NSString * _disambiguationTitle;
    NSString * _mediaName;
    NSArray * _mediaPunchouts;
    int  _mediaType;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSArray *bundleIdentifiersToExcludes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disambiguationTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *mediaName;
@property (nonatomic, copy) NSArray *mediaPunchouts;
@property (nonatomic) int mediaType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBundleIdentifiersToExclude:(id)arg1;
- (void)addMediaPunchouts:(id)arg1;
- (id)albumName;
- (id)artistName;
- (id)bundleIdentifiersToExcludeAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdentifiersToExcludeCount;
- (id)bundleIdentifiersToExcludes;
- (void)clearBundleIdentifiersToExclude;
- (void)clearMediaPunchouts;
- (id)dictionaryRepresentation;
- (id)disambiguationTitle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaName;
- (id)mediaPunchouts;
- (id)mediaPunchoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaPunchoutsCount;
- (int)mediaType;
- (bool)readFrom:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setBundleIdentifiersToExclude:(id)arg1;
- (void)setBundleIdentifiersToExcludes:(id)arg1;
- (void)setDisambiguationTitle:(id)arg1;
- (void)setMediaName:(id)arg1;
- (void)setMediaPunchouts:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
