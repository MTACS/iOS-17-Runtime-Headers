
@interface SetupSchemaProvisionalSiriSetupContext : SISchemaInstrumentationMessage {
    SetupSchemaProvisionalSiriSetupEnded * _ended;
    bool  _hasEnded;
    bool  _hasStarted;
    bool  _hasStep;
    SetupSchemaProvisionalSiriSetupStarted * _started;
    SetupSchemaProvisionalSiriSetupStep * _step;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) SetupSchemaProvisionalSiriSetupEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStarted;
@property (nonatomic) bool hasStep;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SetupSchemaProvisionalSiriSetupStarted *started;
@property (nonatomic, retain) SetupSchemaProvisionalSiriSetupStep *step;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (void)deleteEnded;
- (void)deleteStarted;
- (void)deleteStep;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (bool)hasStarted;
- (bool)hasStep;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setHasStep:(bool)arg1;
- (void)setStarted:(id)arg1;
- (void)setStep:(id)arg1;
- (id)started;
- (id)step;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
