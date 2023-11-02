
@interface TTSSchemaTTSSpeechEnded : SISchemaInstrumentationMessage {
    NSArray * _errorCodes;
    struct { 
        unsigned int synthesizedAudioDurationInSecond : 1; 
        unsigned int synthesisLatencyInSecond : 1; 
        unsigned int synthesisRealTimeFactor : 1; 
        unsigned int promptCount : 1; 
    }  _has;
    unsigned int  _promptCount;
    float  _synthesisLatencyInSecond;
    float  _synthesisRealTimeFactor;
    float  _synthesizedAudioDurationInSecond;
}

@property (nonatomic, copy) NSArray *errorCodes;
@property (nonatomic) bool hasPromptCount;
@property (nonatomic) bool hasSynthesisLatencyInSecond;
@property (nonatomic) bool hasSynthesisRealTimeFactor;
@property (nonatomic) bool hasSynthesizedAudioDurationInSecond;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int promptCount;
@property (nonatomic) float synthesisLatencyInSecond;
@property (nonatomic) float synthesisRealTimeFactor;
@property (nonatomic) float synthesizedAudioDurationInSecond;

- (void).cxx_destruct;
- (void)addErrorCodes:(int)arg1;
- (void)clearErrorCodes;
- (void)deleteErrorCodes;
- (void)deletePromptCount;
- (void)deleteSynthesisLatencyInSecond;
- (void)deleteSynthesisRealTimeFactor;
- (void)deleteSynthesizedAudioDurationInSecond;
- (id)dictionaryRepresentation;
- (id)errorCodes;
- (int)errorCodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorCodesCount;
- (bool)hasPromptCount;
- (bool)hasSynthesisLatencyInSecond;
- (bool)hasSynthesisRealTimeFactor;
- (bool)hasSynthesizedAudioDurationInSecond;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)promptCount;
- (bool)readFrom:(id)arg1;
- (void)setErrorCodes:(id)arg1;
- (void)setHasPromptCount:(bool)arg1;
- (void)setHasSynthesisLatencyInSecond:(bool)arg1;
- (void)setHasSynthesisRealTimeFactor:(bool)arg1;
- (void)setHasSynthesizedAudioDurationInSecond:(bool)arg1;
- (void)setPromptCount:(unsigned int)arg1;
- (void)setSynthesisLatencyInSecond:(float)arg1;
- (void)setSynthesisRealTimeFactor:(float)arg1;
- (void)setSynthesizedAudioDurationInSecond:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)synthesisLatencyInSecond;
- (float)synthesisRealTimeFactor;
- (float)synthesizedAudioDurationInSecond;
- (void)writeTo:(id)arg1;

@end
