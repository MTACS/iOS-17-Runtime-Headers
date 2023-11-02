
@interface GEORPCorrectedField : PBCodable <NSCopying> {
    NSString * _correctedValue;
    int  _field;
    NSString * _fieldName;
    struct { 
        unsigned int has_field : 1; 
        unsigned int has_isMarkedIncorrect : 1; 
        unsigned int read_correctedValue : 1; 
        unsigned int read_fieldName : 1; 
        unsigned int read_originalValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isMarkedIncorrect;
    NSString * _originalValue;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *correctedValue;
@property (nonatomic) int field;
@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, readonly) bool hasCorrectedValue;
@property (nonatomic) bool hasField;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic) bool hasIsMarkedIncorrect;
@property (nonatomic, readonly) bool hasOriginalValue;
@property (nonatomic) bool isMarkedIncorrect;
@property (nonatomic, retain) NSString *originalValue;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsField:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (int)field;
- (id)fieldAsString:(int)arg1;
- (id)fieldName;
- (bool)hasCorrectedValue;
- (bool)hasField;
- (bool)hasFieldName;
- (bool)hasIsMarkedIncorrect;
- (bool)hasOriginalValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMarkedIncorrect;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalValue;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setField:(int)arg1;
- (void)setFieldName:(id)arg1;
- (void)setHasField:(bool)arg1;
- (void)setHasIsMarkedIncorrect:(bool)arg1;
- (void)setIsMarkedIncorrect:(bool)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
