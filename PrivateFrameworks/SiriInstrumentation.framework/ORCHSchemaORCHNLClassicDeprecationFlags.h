
@interface ORCHSchemaORCHNLClassicDeprecationFlags : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isNLServerFallbackDisabled : 1; 
        unsigned int isDomainServerFallbackDisabled : 1; 
    }  _has;
    bool  _isDomainServerFallbackDisabled;
    bool  _isNLServerFallbackDisabled;
}

@property (nonatomic) bool hasIsDomainServerFallbackDisabled;
@property (nonatomic) bool hasIsNLServerFallbackDisabled;
@property (nonatomic) bool isDomainServerFallbackDisabled;
@property (nonatomic) bool isNLServerFallbackDisabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsDomainServerFallbackDisabled;
- (void)deleteIsNLServerFallbackDisabled;
- (id)dictionaryRepresentation;
- (bool)hasIsDomainServerFallbackDisabled;
- (bool)hasIsNLServerFallbackDisabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDomainServerFallbackDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isNLServerFallbackDisabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDomainServerFallbackDisabled:(bool)arg1;
- (void)setHasIsNLServerFallbackDisabled:(bool)arg1;
- (void)setIsDomainServerFallbackDisabled:(bool)arg1;
- (void)setIsNLServerFallbackDisabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
