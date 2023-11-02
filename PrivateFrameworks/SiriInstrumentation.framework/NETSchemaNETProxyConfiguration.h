
@interface NETSchemaNETProxyConfiguration : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isProxyConfigured : 1; 
        unsigned int usingConfiguredProxy : 1; 
    }  _has;
    bool  _isProxyConfigured;
    bool  _usingConfiguredProxy;
}

@property (nonatomic) bool hasIsProxyConfigured;
@property (nonatomic) bool hasUsingConfiguredProxy;
@property (nonatomic) bool isProxyConfigured;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool usingConfiguredProxy;

- (void)deleteIsProxyConfigured;
- (void)deleteUsingConfiguredProxy;
- (id)dictionaryRepresentation;
- (bool)hasIsProxyConfigured;
- (bool)hasUsingConfiguredProxy;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProxyConfigured;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsProxyConfigured:(bool)arg1;
- (void)setHasUsingConfiguredProxy:(bool)arg1;
- (void)setIsProxyConfigured:(bool)arg1;
- (void)setUsingConfiguredProxy:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)usingConfiguredProxy;
- (void)writeTo:(id)arg1;

@end
