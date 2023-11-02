
@interface SISchemaUEIDictationEnablementPromptShown : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isDictationEnabled : 1; 
        unsigned int isLearnMoreButtonClicked : 1; 
        unsigned int promptVisibilityDurationInMs : 1; 
    }  _has;
    bool  _isDictationEnabled;
    bool  _isLearnMoreButtonClicked;
    long long  _promptVisibilityDurationInMs;
}

@property (nonatomic) bool hasIsDictationEnabled;
@property (nonatomic) bool hasIsLearnMoreButtonClicked;
@property (nonatomic) bool hasPromptVisibilityDurationInMs;
@property (nonatomic) bool isDictationEnabled;
@property (nonatomic) bool isLearnMoreButtonClicked;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long promptVisibilityDurationInMs;

- (void)deleteIsDictationEnabled;
- (void)deleteIsLearnMoreButtonClicked;
- (void)deletePromptVisibilityDurationInMs;
- (id)dictionaryRepresentation;
- (bool)hasIsDictationEnabled;
- (bool)hasIsLearnMoreButtonClicked;
- (bool)hasPromptVisibilityDurationInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDictationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLearnMoreButtonClicked;
- (id)jsonData;
- (long long)promptVisibilityDurationInMs;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDictationEnabled:(bool)arg1;
- (void)setHasIsLearnMoreButtonClicked:(bool)arg1;
- (void)setHasPromptVisibilityDurationInMs:(bool)arg1;
- (void)setIsDictationEnabled:(bool)arg1;
- (void)setIsLearnMoreButtonClicked:(bool)arg1;
- (void)setPromptVisibilityDurationInMs:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
