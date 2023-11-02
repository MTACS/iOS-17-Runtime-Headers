
@interface GEOLPRValueMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int read_mappedValues : 1; 
        unsigned int read_timeConditions : 1; 
        unsigned int read_values : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _mappedValues;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _timeConditions;
    NSMutableArray * _values;
}

@property (nonatomic, retain) NSMutableArray *mappedValues;
@property (nonatomic, retain) NSMutableArray *timeConditions;
@property (nonatomic, retain) NSMutableArray *values;

+ (bool)isValid:(id)arg1;
+ (Class)mappedValueType;
+ (Class)timeConditionsType;
+ (Class)valueType;

- (void).cxx_destruct;
- (void)addMappedValue:(id)arg1;
- (void)addTimeConditions:(id)arg1;
- (void)addValue:(id)arg1;
- (void)clearMappedValues;
- (void)clearTimeConditions;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mappedValueAtIndex:(unsigned long long)arg1;
- (id)mappedValues;
- (unsigned long long)mappedValuesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMappedValues:(id)arg1;
- (void)setTimeConditions:(id)arg1;
- (void)setValues:(id)arg1;
- (id)timeConditions;
- (id)timeConditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeConditionsCount;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
