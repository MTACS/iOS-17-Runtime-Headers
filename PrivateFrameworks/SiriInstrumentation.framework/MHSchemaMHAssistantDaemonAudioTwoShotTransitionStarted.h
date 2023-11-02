
@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int promptType : 1; 
    }  _has;
    int  _promptType;
}

@property (nonatomic) bool hasPromptType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int promptType;

- (void)deletePromptType;
- (id)dictionaryRepresentation;
- (bool)hasPromptType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)promptType;
- (bool)readFrom:(id)arg1;
- (void)setHasPromptType:(bool)arg1;
- (void)setPromptType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
