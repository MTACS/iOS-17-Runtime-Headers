
@interface ASRSchemaASRInterpolationWeightBundle : SISchemaInstrumentationMessage {
    unsigned long long  _endTimeInNs;
    struct { 
        unsigned int startTimeInNs : 1; 
        unsigned int endTimeInNs : 1; 
    }  _has;
    unsigned long long  _startTimeInNs;
    NSArray * _weights;
}

@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) bool hasEndTimeInNs;
@property (nonatomic) bool hasStartTimeInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic, copy) NSArray *weights;

- (void).cxx_destruct;
- (void)addWeights:(float)arg1;
- (void)clearWeights;
- (void)deleteEndTimeInNs;
- (void)deleteStartTimeInNs;
- (void)deleteWeights;
- (id)dictionaryRepresentation;
- (unsigned long long)endTimeInNs;
- (bool)hasEndTimeInNs;
- (bool)hasStartTimeInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndTimeInNs:(unsigned long long)arg1;
- (void)setHasEndTimeInNs:(bool)arg1;
- (void)setHasStartTimeInNs:(bool)arg1;
- (void)setStartTimeInNs:(unsigned long long)arg1;
- (void)setWeights:(id)arg1;
- (unsigned long long)startTimeInNs;
- (id)suppressMessageUnderConditions;
- (id)weights;
- (float)weightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)weightsCount;
- (void)writeTo:(id)arg1;

@end
