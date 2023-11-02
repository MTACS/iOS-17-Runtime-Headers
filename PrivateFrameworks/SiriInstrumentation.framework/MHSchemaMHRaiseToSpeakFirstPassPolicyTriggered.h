
@interface MHSchemaMHRaiseToSpeakFirstPassPolicyTriggered : SISchemaInstrumentationMessage {
    double  _firstPassTriggerScore;
    struct { 
        unsigned int isReplayModeEnabled : 1; 
        unsigned int firstPassTriggerScore : 1; 
    }  _has;
    bool  _isReplayModeEnabled;
}

@property (nonatomic) double firstPassTriggerScore;
@property (nonatomic) bool hasFirstPassTriggerScore;
@property (nonatomic) bool hasIsReplayModeEnabled;
@property (nonatomic) bool isReplayModeEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFirstPassTriggerScore;
- (void)deleteIsReplayModeEnabled;
- (id)dictionaryRepresentation;
- (double)firstPassTriggerScore;
- (bool)hasFirstPassTriggerScore;
- (bool)hasIsReplayModeEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplayModeEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFirstPassTriggerScore:(double)arg1;
- (void)setHasFirstPassTriggerScore:(bool)arg1;
- (void)setHasIsReplayModeEnabled:(bool)arg1;
- (void)setIsReplayModeEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
