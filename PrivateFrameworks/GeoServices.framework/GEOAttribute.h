
@interface GEOAttribute : PBCodable <NSCopying> {
    struct { 
        unsigned int has_key : 1; 
        unsigned int has_value : 1; 
    }  _flags;
    int  _key;
    PBUnknownFields * _unknownFields;
    unsigned int  _value;
}

@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasValue;
@property (nonatomic) int key;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int value;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsKey:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)key;
- (id)keyAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setKey:(int)arg1;
- (void)setValue:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)value;
- (void)writeTo:(id)arg1;

@end
