
@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isHandledByPreflight : 1; 
        unsigned int pommesSearchReason : 1; 
    }  _has;
    bool  _hasPreflightClientHandlerIdentifier;
    bool  _hasResult;
    bool  _isHandledByPreflight;
    unsigned int  _pommesSearchReason;
    NSString * _preflightClientHandlerIdentifier;
    POMMESSchemaPOMMESRequestResult * _result;
}

@property (nonatomic) bool hasIsHandledByPreflight;
@property (nonatomic) bool hasPommesSearchReason;
@property (nonatomic) bool hasPreflightClientHandlerIdentifier;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool isHandledByPreflight;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic, copy) NSString *preflightClientHandlerIdentifier;
@property (nonatomic, retain) POMMESSchemaPOMMESRequestResult *result;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsHandledByPreflight;
- (void)deletePommesSearchReason;
- (void)deletePreflightClientHandlerIdentifier;
- (void)deleteResult;
- (id)dictionaryRepresentation;
- (bool)hasIsHandledByPreflight;
- (bool)hasPommesSearchReason;
- (bool)hasPreflightClientHandlerIdentifier;
- (bool)hasResult;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHandledByPreflight;
- (id)jsonData;
- (unsigned int)pommesSearchReason;
- (id)preflightClientHandlerIdentifier;
- (bool)readFrom:(id)arg1;
- (id)result;
- (void)setHasIsHandledByPreflight:(bool)arg1;
- (void)setHasPommesSearchReason:(bool)arg1;
- (void)setHasPreflightClientHandlerIdentifier:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setIsHandledByPreflight:(bool)arg1;
- (void)setPommesSearchReason:(unsigned int)arg1;
- (void)setPreflightClientHandlerIdentifier:(id)arg1;
- (void)setResult:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
