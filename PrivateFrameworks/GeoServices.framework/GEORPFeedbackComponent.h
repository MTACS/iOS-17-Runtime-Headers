
@interface GEORPFeedbackComponent : PBCodable <NSCopying> {
    struct { 
        unsigned int has_status : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _status;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _values;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasType;
@property (nonatomic) int status;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *values;

+ (bool)isValid:(id)arg1;
+ (Class)valueType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addValue:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatus;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setType:(int)arg1;
- (void)setValues:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
