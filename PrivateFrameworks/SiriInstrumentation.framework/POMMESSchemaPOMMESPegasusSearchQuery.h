
@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
    POMMESSchemaPOMMESPegasusSearchQueryAmpUserState * _ampUserState;
    struct { 
        unsigned int hasRewrittenUtterances : 1; 
        unsigned int hasAudioQueueStateInfo : 1; 
    }  _has;
    bool  _hasAmpUserState;
    bool  _hasAudioQueueStateInfo;
    bool  _hasRewrittenUtterances;
    NSArray * _userSpans;
}

@property (nonatomic, retain) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState;
@property (nonatomic) bool hasAmpUserState;
@property (nonatomic) bool hasAudioQueueStateInfo;
@property (nonatomic) bool hasHasAudioQueueStateInfo;
@property (nonatomic) bool hasHasRewrittenUtterances;
@property (nonatomic) bool hasRewrittenUtterances;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *userSpans;

- (void).cxx_destruct;
- (void)addUserSpan:(id)arg1;
- (id)ampUserState;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUserSpan;
- (void)deleteAmpUserState;
- (void)deleteHasAudioQueueStateInfo;
- (void)deleteHasRewrittenUtterances;
- (void)deleteUserSpan;
- (id)dictionaryRepresentation;
- (bool)hasAmpUserState;
- (bool)hasAudioQueueStateInfo;
- (bool)hasHasAudioQueueStateInfo;
- (bool)hasHasRewrittenUtterances;
- (bool)hasRewrittenUtterances;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAmpUserState:(id)arg1;
- (void)setHasAmpUserState:(bool)arg1;
- (void)setHasAudioQueueStateInfo:(bool)arg1;
- (void)setHasHasAudioQueueStateInfo:(bool)arg1;
- (void)setHasHasRewrittenUtterances:(bool)arg1;
- (void)setHasRewrittenUtterances:(bool)arg1;
- (void)setUserSpans:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userSpanAtIndex:(unsigned long long)arg1;
- (unsigned long long)userSpanCount;
- (id)userSpans;
- (void)writeTo:(id)arg1;

@end
