
@interface NLXSchemaCDMClientWarmupStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int serviceGraphName : 1; 
    }  _has;
    int  _serviceGraphName;
}

@property (nonatomic) bool hasServiceGraphName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int serviceGraphName;

- (void)deleteServiceGraphName;
- (id)dictionaryRepresentation;
- (bool)hasServiceGraphName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)serviceGraphName;
- (void)setHasServiceGraphName:(bool)arg1;
- (void)setServiceGraphName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
