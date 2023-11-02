
@interface INFERENCESchemaINFERENCEABModelResultTriggered : SISchemaInstrumentationMessage {
    struct { 
        unsigned int triggerReason : 1; 
        unsigned int projectIntent : 1; 
    }  _has;
    int  _projectIntent;
    int  _triggerReason;
}

@property (nonatomic) bool hasProjectIntent;
@property (nonatomic) bool hasTriggerReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int projectIntent;
@property (nonatomic) int triggerReason;

- (void)deleteProjectIntent;
- (void)deleteTriggerReason;
- (id)dictionaryRepresentation;
- (bool)hasProjectIntent;
- (bool)hasTriggerReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)projectIntent;
- (bool)readFrom:(id)arg1;
- (void)setHasProjectIntent:(bool)arg1;
- (void)setHasTriggerReason:(bool)arg1;
- (void)setProjectIntent:(int)arg1;
- (void)setTriggerReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)triggerReason;
- (void)writeTo:(id)arg1;

@end
