
@interface LRSchemaLRRedactionSignal : SISchemaInstrumentationMessage {
    LRSchemaLRComponentIdentifierRedactionSignal * _componentId;
    struct { 
        unsigned int sensitivityState : 1; 
        unsigned int signalTimeNanosecondsSinceBoot : 1; 
    }  _has;
    bool  _hasComponentId;
    bool  _hasIsEntireClockAffected;
    bool  _hasTimeSpan;
    bool  _isEntireClockAffected;
    int  _sensitivityState;
    unsigned long long  _signalTimeNanosecondsSinceBoot;
    LRSchemaLRTimespanRedactionSignal * _timeSpan;
    unsigned long long  _whichSignal;
}

@property (nonatomic, retain) LRSchemaLRComponentIdentifierRedactionSignal *componentId;
@property (nonatomic) bool hasComponentId;
@property (nonatomic) bool hasIsEntireClockAffected;
@property (nonatomic) bool hasSensitivityState;
@property (nonatomic) bool hasSignalTimeNanosecondsSinceBoot;
@property (nonatomic) bool hasTimeSpan;
@property (nonatomic) bool isEntireClockAffected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sensitivityState;
@property (nonatomic) unsigned long long signalTimeNanosecondsSinceBoot;
@property (nonatomic, retain) LRSchemaLRTimespanRedactionSignal *timeSpan;
@property (nonatomic, readonly) unsigned long long whichSignal;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)componentId;
- (void)deleteComponentId;
- (void)deleteIsEntireClockAffected;
- (void)deleteSensitivityState;
- (void)deleteSignalTimeNanosecondsSinceBoot;
- (void)deleteTimeSpan;
- (id)dictionaryRepresentation;
- (bool)hasComponentId;
- (bool)hasIsEntireClockAffected;
- (bool)hasSensitivityState;
- (bool)hasSignalTimeNanosecondsSinceBoot;
- (bool)hasTimeSpan;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEntireClockAffected;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)sensitivityState;
- (void)setComponentId:(id)arg1;
- (void)setHasComponentId:(bool)arg1;
- (void)setHasIsEntireClockAffected:(bool)arg1;
- (void)setHasSensitivityState:(bool)arg1;
- (void)setHasSignalTimeNanosecondsSinceBoot:(bool)arg1;
- (void)setHasTimeSpan:(bool)arg1;
- (void)setIsEntireClockAffected:(bool)arg1;
- (void)setSensitivityState:(int)arg1;
- (void)setSignalTimeNanosecondsSinceBoot:(unsigned long long)arg1;
- (void)setTimeSpan:(id)arg1;
- (unsigned long long)signalTimeNanosecondsSinceBoot;
- (id)suppressMessageUnderConditions;
- (id)timeSpan;
- (unsigned long long)whichSignal;
- (void)writeTo:(id)arg1;

@end
