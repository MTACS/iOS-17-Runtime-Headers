
@interface DODMLASRSchemaDODMLASREvaluationMetrics : SISchemaInstrumentationMessage {
    float  _bestWeight;
    NSArray * _devs;
    NSArray * _externals;
    struct { 
        unsigned int bestWeight : 1; 
        unsigned int totalDurationInMs : 1; 
    }  _has;
    NSArray * _tests;
    unsigned long long  _totalDurationInMs;
    NSArray * _trains;
}

@property (nonatomic) float bestWeight;
@property (nonatomic, copy) NSArray *devs;
@property (nonatomic, copy) NSArray *externals;
@property (nonatomic) bool hasBestWeight;
@property (nonatomic) bool hasTotalDurationInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tests;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic, copy) NSArray *trains;

- (void).cxx_destruct;
- (void)addDev:(id)arg1;
- (void)addExternal:(id)arg1;
- (void)addTest:(id)arg1;
- (void)addTrain:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (float)bestWeight;
- (void)clearDev;
- (void)clearExternal;
- (void)clearTest;
- (void)clearTrain;
- (void)deleteBestWeight;
- (void)deleteDev;
- (void)deleteExternal;
- (void)deleteTest;
- (void)deleteTotalDurationInMs;
- (void)deleteTrain;
- (id)devAtIndex:(unsigned long long)arg1;
- (unsigned long long)devCount;
- (id)devs;
- (id)dictionaryRepresentation;
- (id)externalAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalCount;
- (id)externals;
- (bool)hasBestWeight;
- (bool)hasTotalDurationInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBestWeight:(float)arg1;
- (void)setDevs:(id)arg1;
- (void)setExternals:(id)arg1;
- (void)setHasBestWeight:(bool)arg1;
- (void)setHasTotalDurationInMs:(bool)arg1;
- (void)setTests:(id)arg1;
- (void)setTotalDurationInMs:(unsigned long long)arg1;
- (void)setTrains:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)testAtIndex:(unsigned long long)arg1;
- (unsigned long long)testCount;
- (id)tests;
- (unsigned long long)totalDurationInMs;
- (id)trainAtIndex:(unsigned long long)arg1;
- (unsigned long long)trainCount;
- (id)trains;
- (void)writeTo:(id)arg1;

@end
