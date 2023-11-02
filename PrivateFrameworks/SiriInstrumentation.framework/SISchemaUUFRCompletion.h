
@interface SISchemaUUFRCompletion : SISchemaInstrumentationMessage {
    int  _completionStatus;
    struct { 
        unsigned int completionStatus : 1; 
    }  _has;
    bool  _hasSiriResponseContext;
    NSArray * _homeKitAccessoryResponses;
    SISchemaSiriResponseContext * _siriResponseContext;
}

@property (nonatomic) int completionStatus;
@property (nonatomic) bool hasCompletionStatus;
@property (nonatomic) bool hasSiriResponseContext;
@property (nonatomic, copy) NSArray *homeKitAccessoryResponses;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaSiriResponseContext *siriResponseContext;

- (void).cxx_destruct;
- (void)addHomeKitAccessoryResponse:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHomeKitAccessoryResponse;
- (int)completionStatus;
- (void)deleteCompletionStatus;
- (void)deleteHomeKitAccessoryResponse;
- (void)deleteSiriResponseContext;
- (id)dictionaryRepresentation;
- (bool)hasCompletionStatus;
- (bool)hasSiriResponseContext;
- (unsigned long long)hash;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitAccessoryResponseCount;
- (id)homeKitAccessoryResponses;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCompletionStatus:(int)arg1;
- (void)setHasCompletionStatus:(bool)arg1;
- (void)setHasSiriResponseContext:(bool)arg1;
- (void)setHomeKitAccessoryResponses:(id)arg1;
- (void)setSiriResponseContext:(id)arg1;
- (id)siriResponseContext;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
