
@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    struct { 
        unsigned int inputType : 1; 
    }  _has;
    bool  _hasContextId;
    int  _inputType;
    NSArray * _tokenChains;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasInputType;
@property (nonatomic) int inputType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokenChains;

- (void).cxx_destruct;
- (void)addTokenChains:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTokenChains;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteInputType;
- (void)deleteTokenChains;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (bool)hasInputType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)inputType;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasInputType:(bool)arg1;
- (void)setInputType:(int)arg1;
- (void)setTokenChains:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tokenChains;
- (id)tokenChainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenChainsCount;
- (void)writeTo:(id)arg1;

@end
