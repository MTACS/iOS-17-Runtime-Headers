
@interface ASRSchemaASRInitializationEnded : SISchemaInstrumentationMessage {
    bool  _compilationDone;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int compilationDone : 1; 
        unsigned int isSpeechRecognizerCreated : 1; 
    }  _has;
    bool  _isSpeechRecognizerCreated;
}

@property (nonatomic) bool compilationDone;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasCompilationDone;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasIsSpeechRecognizerCreated;
@property (nonatomic) bool isSpeechRecognizerCreated;
@property (nonatomic, readonly) NSData *jsonData;

- (bool)compilationDone;
- (void)deleteCompilationDone;
- (void)deleteExists;
- (void)deleteIsSpeechRecognizerCreated;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasCompilationDone;
- (bool)hasExists;
- (bool)hasIsSpeechRecognizerCreated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSpeechRecognizerCreated;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCompilationDone:(bool)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasCompilationDone:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasIsSpeechRecognizerCreated:(bool)arg1;
- (void)setIsSpeechRecognizerCreated:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
