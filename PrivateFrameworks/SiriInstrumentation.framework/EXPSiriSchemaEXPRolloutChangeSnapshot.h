
@interface EXPSiriSchemaEXPRolloutChangeSnapshot : SISchemaInstrumentationMessage {
    struct { 
        unsigned int trialRolloutUpdateReceivedAtTimestampInMs : 1; 
    }  _has;
    NSArray * _rollouts;
    unsigned long long  _trialRolloutUpdateReceivedAtTimestampInMs;
}

@property (nonatomic) bool hasTrialRolloutUpdateReceivedAtTimestampInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *rollouts;
@property (nonatomic) unsigned long long trialRolloutUpdateReceivedAtTimestampInMs;

- (void).cxx_destruct;
- (void)addRollouts:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRollouts;
- (void)deleteRollouts;
- (void)deleteTrialRolloutUpdateReceivedAtTimestampInMs;
- (id)dictionaryRepresentation;
- (bool)hasTrialRolloutUpdateReceivedAtTimestampInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rollouts;
- (id)rolloutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rolloutsCount;
- (void)setHasTrialRolloutUpdateReceivedAtTimestampInMs:(bool)arg1;
- (void)setRollouts:(id)arg1;
- (void)setTrialRolloutUpdateReceivedAtTimestampInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)trialRolloutUpdateReceivedAtTimestampInMs;
- (void)writeTo:(id)arg1;

@end
