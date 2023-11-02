
@interface GEORPEditedAccessPoint : PBCodable <NSCopying> {
    GEORoadAccessPoint * _corrected;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_corrected : 1; 
        unsigned int read_name : 1; 
        unsigned int read_original : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPCorrectedString * _name;
    GEORoadAccessPoint * _original;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORoadAccessPoint *corrected;
@property (nonatomic, readonly) bool hasCorrected;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasOriginal;
@property (nonatomic, retain) GEORPCorrectedString *name;
@property (nonatomic, retain) GEORoadAccessPoint *original;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrected;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasName;
- (bool)hasOriginal;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)original;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrected:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginal:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
