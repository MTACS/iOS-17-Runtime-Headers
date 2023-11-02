
@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCEContactResolverConfig * _contactConfig;
    bool  _hasContactConfig;
    unsigned long long  _whichConfigurationtype;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCEContactResolverConfig *contactConfig;
@property (nonatomic) bool hasContactConfig;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichConfigurationtype;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contactConfig;
- (void)deleteContactConfig;
- (id)dictionaryRepresentation;
- (bool)hasContactConfig;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactConfig:(id)arg1;
- (void)setHasContactConfig:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichConfigurationtype;
- (void)writeTo:(id)arg1;

@end
