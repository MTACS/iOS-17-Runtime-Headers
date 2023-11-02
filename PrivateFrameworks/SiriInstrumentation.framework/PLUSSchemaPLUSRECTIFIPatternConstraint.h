
@interface PLUSSchemaPLUSRECTIFIPatternConstraint : SISchemaInstrumentationMessage {
    int  _constraintType;
    float  _constraintValue;
    struct { 
        unsigned int constraintType : 1; 
        unsigned int constraintValue : 1; 
    }  _has;
}

@property (nonatomic) int constraintType;
@property (nonatomic) float constraintValue;
@property (nonatomic) bool hasConstraintType;
@property (nonatomic) bool hasConstraintValue;
@property (nonatomic, readonly) NSData *jsonData;

- (int)constraintType;
- (float)constraintValue;
- (void)deleteConstraintType;
- (void)deleteConstraintValue;
- (id)dictionaryRepresentation;
- (bool)hasConstraintType;
- (bool)hasConstraintValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConstraintType:(int)arg1;
- (void)setConstraintValue:(float)arg1;
- (void)setHasConstraintType:(bool)arg1;
- (void)setHasConstraintValue:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
