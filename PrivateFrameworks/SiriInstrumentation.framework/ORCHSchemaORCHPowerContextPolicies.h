
@interface ORCHSchemaORCHPowerContextPolicies : SISchemaInstrumentationMessage {
    int  _asrAssistantPolicy;
    int  _asrDictationPolicy;
    struct { 
        unsigned int asrAssistantPolicy : 1; 
        unsigned int asrDictationPolicy : 1; 
        unsigned int ttsPolicy : 1; 
    }  _has;
    int  _ttsPolicy;
}

@property (nonatomic) int asrAssistantPolicy;
@property (nonatomic) int asrDictationPolicy;
@property (nonatomic) bool hasAsrAssistantPolicy;
@property (nonatomic) bool hasAsrDictationPolicy;
@property (nonatomic) bool hasTtsPolicy;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int ttsPolicy;

- (int)asrAssistantPolicy;
- (int)asrDictationPolicy;
- (void)deleteAsrAssistantPolicy;
- (void)deleteAsrDictationPolicy;
- (void)deleteTtsPolicy;
- (id)dictionaryRepresentation;
- (bool)hasAsrAssistantPolicy;
- (bool)hasAsrDictationPolicy;
- (bool)hasTtsPolicy;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAsrAssistantPolicy:(int)arg1;
- (void)setAsrDictationPolicy:(int)arg1;
- (void)setHasAsrAssistantPolicy:(bool)arg1;
- (void)setHasAsrDictationPolicy:(bool)arg1;
- (void)setHasTtsPolicy:(bool)arg1;
- (void)setTtsPolicy:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)ttsPolicy;
- (void)writeTo:(id)arg1;

@end
