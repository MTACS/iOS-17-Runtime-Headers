
@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage {
    NSString * _contextName;
    int  _environment;
    struct { 
        unsigned int environment : 1; 
    }  _has;
    bool  _hasContextName;
}

@property (nonatomic, copy) NSString *contextName;
@property (nonatomic) int environment;
@property (nonatomic) bool hasContextName;
@property (nonatomic) bool hasEnvironment;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)contextName;
- (void)deleteContextName;
- (void)deleteEnvironment;
- (id)dictionaryRepresentation;
- (int)environment;
- (bool)hasContextName;
- (bool)hasEnvironment;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setHasContextName:(bool)arg1;
- (void)setHasEnvironment:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
