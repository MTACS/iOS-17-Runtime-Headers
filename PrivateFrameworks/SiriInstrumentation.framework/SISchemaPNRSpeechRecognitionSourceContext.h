
@interface SISchemaPNRSpeechRecognitionSourceContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int speechRecognitionSource : 1; 
    }  _has;
    int  _speechRecognitionSource;
}

@property (nonatomic) bool hasSpeechRecognitionSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int speechRecognitionSource;

- (void)deleteSpeechRecognitionSource;
- (id)dictionaryRepresentation;
- (bool)hasSpeechRecognitionSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSpeechRecognitionSource:(bool)arg1;
- (void)setSpeechRecognitionSource:(int)arg1;
- (int)speechRecognitionSource;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
