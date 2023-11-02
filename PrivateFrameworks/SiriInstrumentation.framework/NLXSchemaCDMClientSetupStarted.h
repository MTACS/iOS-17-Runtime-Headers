
@interface NLXSchemaCDMClientSetupStarted : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int serviceGraphName : 1; 
        unsigned int performWarmupOperations : 1; 
    }  _has;
    bool  _performWarmupOperations;
    int  _serviceGraphName;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasPerformWarmupOperations;
@property (nonatomic) bool hasServiceGraphName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool performWarmupOperations;
@property (nonatomic) int serviceGraphName;

- (void)deleteExists;
- (void)deletePerformWarmupOperations;
- (void)deleteServiceGraphName;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasPerformWarmupOperations;
- (bool)hasServiceGraphName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)performWarmupOperations;
- (bool)readFrom:(id)arg1;
- (int)serviceGraphName;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasPerformWarmupOperations:(bool)arg1;
- (void)setHasServiceGraphName:(bool)arg1;
- (void)setPerformWarmupOperations:(bool)arg1;
- (void)setServiceGraphName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
