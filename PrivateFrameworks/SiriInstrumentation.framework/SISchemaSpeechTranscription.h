
@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {
    NSString * _aceID;
    struct { 
        unsigned int speechTranscriptionType : 1; 
    }  _has;
    bool  _hasAceID;
    int  _speechTranscriptionType;
}

@property (nonatomic, copy) NSString *aceID;
@property (nonatomic) bool hasAceID;
@property (nonatomic) bool hasSpeechTranscriptionType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int speechTranscriptionType;

- (void).cxx_destruct;
- (id)aceID;
- (void)deleteAceID;
- (void)deleteSpeechTranscriptionType;
- (id)dictionaryRepresentation;
- (bool)hasAceID;
- (bool)hasSpeechTranscriptionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceID:(id)arg1;
- (void)setHasAceID:(bool)arg1;
- (void)setHasSpeechTranscriptionType:(bool)arg1;
- (void)setSpeechTranscriptionType:(int)arg1;
- (int)speechTranscriptionType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
