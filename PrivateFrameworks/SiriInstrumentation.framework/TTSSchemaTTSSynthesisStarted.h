
@interface TTSSchemaTTSSynthesisStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int synthesisSource : 1; 
        unsigned int synthesisEffect : 1; 
        unsigned int thermalState : 1; 
    }  _has;
    bool  _hasVoiceContext;
    int  _synthesisEffect;
    int  _synthesisSource;
    int  _thermalState;
    TTSSchemaTTSVoiceContext * _voiceContext;
}

@property (nonatomic) bool hasSynthesisEffect;
@property (nonatomic) bool hasSynthesisSource;
@property (nonatomic) bool hasThermalState;
@property (nonatomic) bool hasVoiceContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) int synthesisSource;
@property (nonatomic) int thermalState;
@property (nonatomic, retain) TTSSchemaTTSVoiceContext *voiceContext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (id)dictionaryRepresentation;
- (bool)hasSynthesisEffect;
- (bool)hasSynthesisSource;
- (bool)hasThermalState;
- (bool)hasVoiceContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSynthesisEffect:(bool)arg1;
- (void)setHasSynthesisSource:(bool)arg1;
- (void)setHasThermalState:(bool)arg1;
- (void)setHasVoiceContext:(bool)arg1;
- (void)setSynthesisEffect:(int)arg1;
- (void)setSynthesisSource:(int)arg1;
- (void)setThermalState:(int)arg1;
- (void)setVoiceContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)synthesisEffect;
- (int)synthesisSource;
- (int)thermalState;
- (id)voiceContext;
- (void)writeTo:(id)arg1;

@end
