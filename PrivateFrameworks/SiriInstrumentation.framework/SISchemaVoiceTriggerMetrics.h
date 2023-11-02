
@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    int  _explicitUtterances;
    MHSchemaMHVoiceTriggerFirstPassDailyMetadata * _firstPassMetadata;
    NSArray * _firstPassStatistics;
    int  _firstPassTriggers;
    struct { 
        unsigned int implicitUtterances : 1; 
        unsigned int explicitUtterances : 1; 
        unsigned int firstPassTriggers : 1; 
        unsigned int isJSEnabled : 1; 
    }  _has;
    bool  _hasFirstPassMetadata;
    int  _implicitUtterances;
    bool  _isJSEnabled;
}

@property (nonatomic) int explicitUtterances;
@property (nonatomic, retain) MHSchemaMHVoiceTriggerFirstPassDailyMetadata *firstPassMetadata;
@property (nonatomic, copy) NSArray *firstPassStatistics;
@property (nonatomic) int firstPassTriggers;
@property (nonatomic) bool hasExplicitUtterances;
@property (nonatomic) bool hasFirstPassMetadata;
@property (nonatomic) bool hasFirstPassTriggers;
@property (nonatomic) bool hasImplicitUtterances;
@property (nonatomic) bool hasIsJSEnabled;
@property (nonatomic) int implicitUtterances;
@property (nonatomic) bool isJSEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addFirstPassStatistics:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearFirstPassStatistics;
- (void)deleteExplicitUtterances;
- (void)deleteFirstPassMetadata;
- (void)deleteFirstPassStatistics;
- (void)deleteFirstPassTriggers;
- (void)deleteImplicitUtterances;
- (void)deleteIsJSEnabled;
- (id)dictionaryRepresentation;
- (int)explicitUtterances;
- (id)firstPassMetadata;
- (id)firstPassStatistics;
- (id)firstPassStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)firstPassStatisticsCount;
- (int)firstPassTriggers;
- (bool)hasExplicitUtterances;
- (bool)hasFirstPassMetadata;
- (bool)hasFirstPassTriggers;
- (bool)hasImplicitUtterances;
- (bool)hasIsJSEnabled;
- (unsigned long long)hash;
- (int)implicitUtterances;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isJSEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExplicitUtterances:(int)arg1;
- (void)setFirstPassMetadata:(id)arg1;
- (void)setFirstPassStatistics:(id)arg1;
- (void)setFirstPassTriggers:(int)arg1;
- (void)setHasExplicitUtterances:(bool)arg1;
- (void)setHasFirstPassMetadata:(bool)arg1;
- (void)setHasFirstPassTriggers:(bool)arg1;
- (void)setHasImplicitUtterances:(bool)arg1;
- (void)setHasIsJSEnabled:(bool)arg1;
- (void)setImplicitUtterances:(int)arg1;
- (void)setIsJSEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
