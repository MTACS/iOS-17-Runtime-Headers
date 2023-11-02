
@interface USPSchemaUSPMetric : SISchemaInstrumentationMessage {
    struct { 
        unsigned int value : 1; 
    }  _has;
    bool  _hasName;
    bool  _hasUnit;
    NSArray * _iterationValues;
    NSString * _name;
    NSString * _unit;
    double  _value;
}

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasUnit;
@property (nonatomic) bool hasValue;
@property (nonatomic, copy) NSArray *iterationValues;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)addIterationValues:(double)arg1;
- (void)clearIterationValues;
- (void)deleteIterationValues;
- (void)deleteName;
- (void)deleteUnit;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasUnit;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)iterationValues;
- (double)iterationValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iterationValuesCount;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setIterationValues:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(double)arg1;
- (id)suppressMessageUnderConditions;
- (id)unit;
- (double)value;
- (void)writeTo:(id)arg1;

@end
