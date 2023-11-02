
@interface TTSSchemaTTSRequestReceived : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    struct { 
        unsigned int inputTextLength : 1; 
    }  _has;
    bool  _hasContextId;
    bool  _hasLinkId;
    bool  _hasRequestedVoiceContext;
    int  _inputTextLength;
    SISchemaUUID * _linkId;
    TTSSchemaTTSVoiceContext * _requestedVoiceContext;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasInputTextLength;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasRequestedVoiceContext;
@property (nonatomic) int inputTextLength;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, retain) TTSSchemaTTSVoiceContext *requestedVoiceContext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteInputTextLength;
- (void)deleteLinkId;
- (void)deleteRequestedVoiceContext;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (bool)hasInputTextLength;
- (bool)hasLinkId;
- (bool)hasRequestedVoiceContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)inputTextLength;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)requestedVoiceContext;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasInputTextLength:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasRequestedVoiceContext:(bool)arg1;
- (void)setInputTextLength:(int)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRequestedVoiceContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
