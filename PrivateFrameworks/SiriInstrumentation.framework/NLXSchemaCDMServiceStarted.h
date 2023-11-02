
@interface NLXSchemaCDMServiceStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int serviceName : 1; 
    }  _has;
    int  _serviceName;
}

@property (nonatomic) bool hasServiceName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int serviceName;

- (void)deleteServiceName;
- (id)dictionaryRepresentation;
- (bool)hasServiceName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)serviceName;
- (void)setHasServiceName:(bool)arg1;
- (void)setServiceName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
