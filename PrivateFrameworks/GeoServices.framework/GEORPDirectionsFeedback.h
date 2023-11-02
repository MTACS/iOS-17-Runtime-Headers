
@interface GEORPDirectionsFeedback : PBCodable <NSCopying> {
    int  _correctionType;
    GEORPDirectionsFeedbackContext * _directionsContext;
    GEORPDirectionsCorrections * _directionsCorrections;
    struct { 
        unsigned int has_correctionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_directionsContext : 1; 
        unsigned int read_directionsCorrections : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int correctionType;
@property (nonatomic, retain) GEORPDirectionsFeedbackContext *directionsContext;
@property (nonatomic, retain) GEORPDirectionsCorrections *directionsCorrections;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, readonly) bool hasDirectionsContext;
@property (nonatomic, readonly) bool hasDirectionsCorrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionType;
- (id)correctionTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsContext;
- (id)directionsCorrections;
- (bool)hasCorrectionType;
- (bool)hasDirectionsContext;
- (bool)hasDirectionsCorrections;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (void)setCorrectionType:(int)arg1;
- (void)setDirectionsContext:(id)arg1;
- (void)setDirectionsCorrections:(id)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
