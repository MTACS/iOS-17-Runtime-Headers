
@interface FLOWSchemaFLOWStep : SISchemaInstrumentationMessage {
    FLOWSchemaFLOWAppContext * _appContext;
    NSArray * _domainContexts;
    FLOWSchemaFLOWState * _flowState;
    struct { 
        unsigned int sequenceNum : 1; 
        unsigned int timestampMs : 1; 
    }  _has;
    bool  _hasAppContext;
    bool  _hasFlowState;
    bool  _hasPlatformRelatedContext;
    NSArray * _platformContexts;
    FLOWSchemaFLOWPlatformContext * _platformRelatedContext;
    unsigned int  _sequenceNum;
    long long  _timestampMs;
}

@property (nonatomic, retain) FLOWSchemaFLOWAppContext *appContext;
@property (nonatomic, copy) NSArray *domainContexts;
@property (nonatomic, retain) FLOWSchemaFLOWState *flowState;
@property (nonatomic) bool hasAppContext;
@property (nonatomic) bool hasFlowState;
@property (nonatomic) bool hasPlatformRelatedContext;
@property (nonatomic) bool hasSequenceNum;
@property (nonatomic) bool hasTimestampMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *platformContexts;
@property (nonatomic, retain) FLOWSchemaFLOWPlatformContext *platformRelatedContext;
@property (nonatomic) unsigned int sequenceNum;
@property (nonatomic) long long timestampMs;

- (void).cxx_destruct;
- (void)addDomainContext:(id)arg1;
- (void)addPlatformContext:(id)arg1;
- (id)appContext;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearDomainContext;
- (void)clearPlatformContext;
- (void)deleteAppContext;
- (void)deleteDomainContext;
- (void)deleteFlowState;
- (void)deletePlatformContext;
- (void)deletePlatformRelatedContext;
- (void)deleteSequenceNum;
- (void)deleteTimestampMs;
- (id)dictionaryRepresentation;
- (id)domainContextAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainContextCount;
- (id)domainContexts;
- (id)flowState;
- (bool)hasAppContext;
- (bool)hasFlowState;
- (bool)hasPlatformRelatedContext;
- (bool)hasSequenceNum;
- (bool)hasTimestampMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)platformContextAtIndex:(unsigned long long)arg1;
- (unsigned long long)platformContextCount;
- (id)platformContexts;
- (id)platformRelatedContext;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceNum;
- (void)setAppContext:(id)arg1;
- (void)setDomainContexts:(id)arg1;
- (void)setFlowState:(id)arg1;
- (void)setHasAppContext:(bool)arg1;
- (void)setHasFlowState:(bool)arg1;
- (void)setHasPlatformRelatedContext:(bool)arg1;
- (void)setHasSequenceNum:(bool)arg1;
- (void)setHasTimestampMs:(bool)arg1;
- (void)setPlatformContexts:(id)arg1;
- (void)setPlatformRelatedContext:(id)arg1;
- (void)setSequenceNum:(unsigned int)arg1;
- (void)setTimestampMs:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (long long)timestampMs;
- (void)writeTo:(id)arg1;

@end
