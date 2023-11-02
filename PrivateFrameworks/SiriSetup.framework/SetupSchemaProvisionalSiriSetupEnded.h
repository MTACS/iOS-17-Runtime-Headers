
@interface SetupSchemaProvisionalSiriSetupEnded : SISchemaInstrumentationMessage {
    bool  _dismissed;
    struct { 
        unsigned int siriEnabled : 1; 
        unsigned int dismissed : 1; 
    }  _has;
    bool  _siriEnabled;
}

@property (nonatomic) bool dismissed;
@property (nonatomic) bool hasDismissed;
@property (nonatomic) bool hasSiriEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool siriEnabled;

- (void)deleteDismissed;
- (void)deleteSiriEnabled;
- (id)dictionaryRepresentation;
- (bool)dismissed;
- (bool)hasDismissed;
- (bool)hasSiriEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDismissed:(bool)arg1;
- (void)setHasDismissed:(bool)arg1;
- (void)setHasSiriEnabled:(bool)arg1;
- (void)setSiriEnabled:(bool)arg1;
- (bool)siriEnabled;
- (void)writeTo:(id)arg1;

@end
