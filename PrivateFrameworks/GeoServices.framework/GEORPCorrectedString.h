
@interface GEORPCorrectedString : PBCodable <NSCopying> {
    NSString * _correctedValue;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_correctedValue : 1; 
        unsigned int read_originalValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _originalValue;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *correctedValue;
@property (nonatomic, readonly) bool hasCorrectedValue;
@property (nonatomic, readonly) bool hasOriginalValue;
@property (nonatomic, retain) NSString *originalValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedValue;
- (bool)hasOriginalValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalValue;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setOriginalValue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
