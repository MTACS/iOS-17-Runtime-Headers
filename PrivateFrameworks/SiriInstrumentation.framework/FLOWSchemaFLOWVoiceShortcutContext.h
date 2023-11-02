
@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage {
    NSArray * _voiceShortcutActions;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *voiceShortcutActions;

- (void).cxx_destruct;
- (void)addVoiceShortcutAction:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearVoiceShortcutAction;
- (void)deleteVoiceShortcutAction;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setVoiceShortcutActions:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceShortcutActionAtIndex:(unsigned long long)arg1;
- (unsigned long long)voiceShortcutActionCount;
- (id)voiceShortcutActions;
- (void)writeTo:(id)arg1;

@end
