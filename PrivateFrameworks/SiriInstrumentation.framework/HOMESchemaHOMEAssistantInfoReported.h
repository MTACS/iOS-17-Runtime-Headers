
@interface HOMESchemaHOMEAssistantInfoReported : SISchemaInstrumentationMessage {
    bool  _hasHashedHomeId;
    SISchemaUUID * _hashedHomeId;
}

@property (nonatomic) bool hasHashedHomeId;
@property (nonatomic, retain) SISchemaUUID *hashedHomeId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHashedHomeId;
- (id)dictionaryRepresentation;
- (bool)hasHashedHomeId;
- (unsigned long long)hash;
- (id)hashedHomeId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHashedHomeId:(bool)arg1;
- (void)setHashedHomeId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
