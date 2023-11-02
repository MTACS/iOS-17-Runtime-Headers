
@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage {
    TTSSchemaTTSVoiceContext * _context;
    bool  _hasContext;
    bool  _hasVoiceSettings;
    SISchemaVoiceSettings * _voiceSettings;
}

@property (nonatomic, retain) TTSSchemaTTSVoiceContext *context;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasVoiceSettings;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaVoiceSettings *voiceSettings;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)context;
- (void)deleteContext;
- (void)deleteVoiceSettings;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasVoiceSettings;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasVoiceSettings:(bool)arg1;
- (void)setVoiceSettings:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceSettings;
- (void)writeTo:(id)arg1;

@end
