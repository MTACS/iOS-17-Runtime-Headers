
@interface GEORouteAnnotation : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    unsigned int  _deprecatedOffsetMeters;
    struct { 
        unsigned int has_deprecatedOffsetMeters : 1; 
        unsigned int has_offsetMeters : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_infoCard : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMiniCard * _infoCard;
    float  _offsetMeters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic) unsigned int deprecatedOffsetMeters;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic) bool hasDeprecatedOffsetMeters;
@property (nonatomic, readonly) bool hasInfoCard;
@property (nonatomic) bool hasOffsetMeters;
@property (nonatomic, retain) GEOMiniCard *infoCard;
@property (nonatomic) float offsetMeters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)artwork;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deprecatedOffsetMeters;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtwork;
- (bool)hasDeprecatedOffsetMeters;
- (bool)hasInfoCard;
- (bool)hasOffsetMeters;
- (unsigned long long)hash;
- (id)infoCard;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (float)offsetMeters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setDeprecatedOffsetMeters:(unsigned int)arg1;
- (void)setHasDeprecatedOffsetMeters:(bool)arg1;
- (void)setHasOffsetMeters:(bool)arg1;
- (void)setInfoCard:(id)arg1;
- (void)setOffsetMeters:(float)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
