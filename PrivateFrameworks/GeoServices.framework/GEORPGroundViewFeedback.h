
@interface GEORPGroundViewFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_groundViewContext : 1; 
        unsigned int read_groundViewCorrections : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPGroundViewFeedbackContext * _groundViewContext;
    GEORPGroundViewCorrections * _groundViewCorrections;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPGroundViewFeedbackContext *groundViewContext;
@property (nonatomic, retain) GEORPGroundViewCorrections *groundViewCorrections;
@property (nonatomic, readonly) bool hasGroundViewContext;
@property (nonatomic, readonly) bool hasGroundViewCorrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groundViewContext;
- (id)groundViewCorrections;
- (bool)hasGroundViewContext;
- (bool)hasGroundViewCorrections;
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
- (void)setGroundViewContext:(id)arg1;
- (void)setGroundViewCorrections:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
