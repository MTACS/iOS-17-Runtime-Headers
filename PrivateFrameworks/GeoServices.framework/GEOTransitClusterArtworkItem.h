
@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying> {
    unsigned int  _artworkIndex;
    struct { 
        unsigned int has_artworkIndex : 1; 
    }  _flags;
    GEOFormattedString * _text;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic) unsigned int artworkIndex;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasArtworkIndex;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOServerFormattedString> *text;
@property (nonatomic, retain) GEOFormattedString *text;
@property (nonatomic, readonly) <GEOTransitTextDataSource> *textDataSource;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityText;
- (unsigned int)artworkIndex;
- (int)artworkSourceType;
- (int)artworkUseType;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkIndex;
- (bool)hasRoutingIncidentBadge;
- (bool)hasText;
- (unsigned long long)hash;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkIndex:(unsigned int)arg1;
- (void)setHasArtworkIndex:(bool)arg1;
- (void)setText:(id)arg1;
- (id)shieldDataSource;
- (id)text;
- (id)textDataSource;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
