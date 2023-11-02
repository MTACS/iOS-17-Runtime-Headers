
@interface PLUSSchemaPLUSInferencePluginStartedOrChanged : SISchemaInstrumentationMessage {
    struct { 
        unsigned int triggerReason : 1; 
    }  _has;
    int  _triggerReason;
}

@property (nonatomic) bool hasTriggerReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int triggerReason;

- (void)deleteTriggerReason;
- (id)dictionaryRepresentation;
- (bool)hasTriggerReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTriggerReason:(bool)arg1;
- (void)setTriggerReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)triggerReason;
- (void)writeTo:(id)arg1;

@end
