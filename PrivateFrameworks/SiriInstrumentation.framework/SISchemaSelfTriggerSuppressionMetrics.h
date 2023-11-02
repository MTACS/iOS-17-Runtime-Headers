
@interface SISchemaSelfTriggerSuppressionMetrics : SISchemaInstrumentationMessage {
    double  _durationSelfTriggerSuppressionWasActiveInSeconds;
    struct { 
        unsigned int numSelfTriggersDetected : 1; 
        unsigned int durationSelfTriggerSuppressionWasActiveInSeconds : 1; 
    }  _has;
    int  _numSelfTriggersDetected;
    NSArray * _selfTriggerSuppressionSessions;
}

@property (nonatomic) double durationSelfTriggerSuppressionWasActiveInSeconds;
@property (nonatomic) bool hasDurationSelfTriggerSuppressionWasActiveInSeconds;
@property (nonatomic) bool hasNumSelfTriggersDetected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numSelfTriggersDetected;
@property (nonatomic, copy) NSArray *selfTriggerSuppressionSessions;

- (void).cxx_destruct;
- (void)addSelfTriggerSuppressionSessions:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSelfTriggerSuppressionSessions;
- (void)deleteDurationSelfTriggerSuppressionWasActiveInSeconds;
- (void)deleteNumSelfTriggersDetected;
- (void)deleteSelfTriggerSuppressionSessions;
- (id)dictionaryRepresentation;
- (double)durationSelfTriggerSuppressionWasActiveInSeconds;
- (bool)hasDurationSelfTriggerSuppressionWasActiveInSeconds;
- (bool)hasNumSelfTriggersDetected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numSelfTriggersDetected;
- (bool)readFrom:(id)arg1;
- (id)selfTriggerSuppressionSessions;
- (id)selfTriggerSuppressionSessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)selfTriggerSuppressionSessionsCount;
- (void)setDurationSelfTriggerSuppressionWasActiveInSeconds:(double)arg1;
- (void)setHasDurationSelfTriggerSuppressionWasActiveInSeconds:(bool)arg1;
- (void)setHasNumSelfTriggersDetected:(bool)arg1;
- (void)setNumSelfTriggersDetected:(int)arg1;
- (void)setSelfTriggerSuppressionSessions:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
