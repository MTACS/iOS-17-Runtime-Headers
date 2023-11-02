
@interface LCServiceConfigurationResponse : SISchemaInstrumentationMessage {
    LCServiceLoggingConfiguration * _configuration;
    bool  _hasConfiguration;
    unsigned long long  _whichResponse;
}

@property (nonatomic, retain) LCServiceLoggingConfiguration *configuration;
@property (nonatomic) bool hasConfiguration;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichResponse;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)configuration;
- (void)deleteConfiguration;
- (id)dictionaryRepresentation;
- (bool)hasConfiguration;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setHasConfiguration:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichResponse;
- (void)writeTo:(id)arg1;

@end
