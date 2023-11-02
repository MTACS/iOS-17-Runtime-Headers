
@interface GEONumberData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_value : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    float  _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) float value;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(float)arg1;
- (id)unknownFields;
- (float)value;
- (void)writeTo:(id)arg1;

@end
