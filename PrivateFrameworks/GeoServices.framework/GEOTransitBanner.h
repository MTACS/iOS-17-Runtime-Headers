
@interface GEOTransitBanner : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_primaryText : 1; 
        unsigned int read_secondaryText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _primaryText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _secondaryText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasPrimaryText;
@property (nonatomic, readonly) bool hasSecondaryText;
@property (nonatomic, retain) GEOFormattedString *primaryText;
@property (nonatomic, retain) GEOFormattedString *secondaryText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)artwork;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtwork;
- (bool)hasPrimaryText;
- (bool)hasSecondaryText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)primaryText;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryText;
- (void)setArtwork:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
