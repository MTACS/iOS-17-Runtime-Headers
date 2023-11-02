
@interface GEOTransitStepBadge : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_text : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _text;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) GEOFormattedString *text;
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
- (bool)hasText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
