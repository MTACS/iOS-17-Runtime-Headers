
@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
    SISchemaDictationAlternativesPresent * _dictationAlternativesPresent;
    int  _dictationModel;
    NSString * _dictationModelVersion;
    struct { 
        unsigned int dictationModel : 1; 
    }  _has;
    bool  _hasDictationAlternativesPresent;
    bool  _hasDictationModelVersion;
}

@property (nonatomic, retain) SISchemaDictationAlternativesPresent *dictationAlternativesPresent;
@property (nonatomic) int dictationModel;
@property (nonatomic, copy) NSString *dictationModelVersion;
@property (nonatomic) bool hasDictationAlternativesPresent;
@property (nonatomic) bool hasDictationModel;
@property (nonatomic) bool hasDictationModelVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDictationAlternativesPresent;
- (void)deleteDictationModel;
- (void)deleteDictationModelVersion;
- (id)dictationAlternativesPresent;
- (int)dictationModel;
- (id)dictationModelVersion;
- (id)dictionaryRepresentation;
- (bool)hasDictationAlternativesPresent;
- (bool)hasDictationModel;
- (bool)hasDictationModelVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDictationAlternativesPresent:(id)arg1;
- (void)setDictationModel:(int)arg1;
- (void)setDictationModelVersion:(id)arg1;
- (void)setHasDictationAlternativesPresent:(bool)arg1;
- (void)setHasDictationModel:(bool)arg1;
- (void)setHasDictationModelVersion:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
