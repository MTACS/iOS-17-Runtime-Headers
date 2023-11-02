
@interface ASRSchemaASREmojiMetrics : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isEmojiPersonalizationUsed : 1; 
        unsigned int isEmojiDisambiguationUsed : 1; 
        unsigned int isEmojiExpectedButNotRecognized : 1; 
    }  _has;
    bool  _isEmojiDisambiguationUsed;
    bool  _isEmojiExpectedButNotRecognized;
    bool  _isEmojiPersonalizationUsed;
    NSArray * _recognizedEmojis;
}

@property (nonatomic) bool hasIsEmojiDisambiguationUsed;
@property (nonatomic) bool hasIsEmojiExpectedButNotRecognized;
@property (nonatomic) bool hasIsEmojiPersonalizationUsed;
@property (nonatomic) bool isEmojiDisambiguationUsed;
@property (nonatomic) bool isEmojiExpectedButNotRecognized;
@property (nonatomic) bool isEmojiPersonalizationUsed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *recognizedEmojis;

- (void).cxx_destruct;
- (void)addRecognizedEmojis:(id)arg1;
- (void)clearRecognizedEmojis;
- (void)deleteIsEmojiDisambiguationUsed;
- (void)deleteIsEmojiExpectedButNotRecognized;
- (void)deleteIsEmojiPersonalizationUsed;
- (void)deleteRecognizedEmojis;
- (id)dictionaryRepresentation;
- (bool)hasIsEmojiDisambiguationUsed;
- (bool)hasIsEmojiExpectedButNotRecognized;
- (bool)hasIsEmojiPersonalizationUsed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEmojiDisambiguationUsed;
- (bool)isEmojiExpectedButNotRecognized;
- (bool)isEmojiPersonalizationUsed;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)recognizedEmojis;
- (id)recognizedEmojisAtIndex:(unsigned long long)arg1;
- (unsigned long long)recognizedEmojisCount;
- (void)setHasIsEmojiDisambiguationUsed:(bool)arg1;
- (void)setHasIsEmojiExpectedButNotRecognized:(bool)arg1;
- (void)setHasIsEmojiPersonalizationUsed:(bool)arg1;
- (void)setIsEmojiDisambiguationUsed:(bool)arg1;
- (void)setIsEmojiExpectedButNotRecognized:(bool)arg1;
- (void)setIsEmojiPersonalizationUsed:(bool)arg1;
- (void)setRecognizedEmojis:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
