
@interface PETSchemaPETAggregationKey : SISchemaInstrumentationMessage {
    double  _bucket;
    unsigned int  _datestamp;
    struct { 
        unsigned int type : 1; 
        unsigned int datestamp : 1; 
        unsigned int bucket : 1; 
    }  _has;
    bool  _hasRaw_message;
    PETSchemaPETRawMessage * _raw_message;
    int  _type;
}

@property (nonatomic) double bucket;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) bool hasBucket;
@property (nonatomic) bool hasDatestamp;
@property (nonatomic) bool hasRaw_message;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PETSchemaPETRawMessage *raw_message;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (double)bucket;
- (unsigned int)datestamp;
- (void)deleteBucket;
- (void)deleteDatestamp;
- (void)deleteRaw_message;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasBucket;
- (bool)hasDatestamp;
- (bool)hasRaw_message;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)raw_message;
- (bool)readFrom:(id)arg1;
- (void)setBucket:(double)arg1;
- (void)setDatestamp:(unsigned int)arg1;
- (void)setHasBucket:(bool)arg1;
- (void)setHasDatestamp:(bool)arg1;
- (void)setHasRaw_message:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setRaw_message:(id)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end
