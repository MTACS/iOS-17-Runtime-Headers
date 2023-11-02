
@interface FLOWSchemaFLOWKeyboardUsageMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numCharsAdded : 1; 
        unsigned int numCharsDeleted : 1; 
        unsigned int levenshteinEditDistance : 1; 
        unsigned int isEmojiUsed : 1; 
    }  _has;
    bool  _isEmojiUsed;
    unsigned int  _levenshteinEditDistance;
    unsigned int  _numCharsAdded;
    unsigned int  _numCharsDeleted;
}

@property (nonatomic) bool hasIsEmojiUsed;
@property (nonatomic) bool hasLevenshteinEditDistance;
@property (nonatomic) bool hasNumCharsAdded;
@property (nonatomic) bool hasNumCharsDeleted;
@property (nonatomic) bool isEmojiUsed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int levenshteinEditDistance;
@property (nonatomic) unsigned int numCharsAdded;
@property (nonatomic) unsigned int numCharsDeleted;

- (void)deleteIsEmojiUsed;
- (void)deleteLevenshteinEditDistance;
- (void)deleteNumCharsAdded;
- (void)deleteNumCharsDeleted;
- (id)dictionaryRepresentation;
- (bool)hasIsEmojiUsed;
- (bool)hasLevenshteinEditDistance;
- (bool)hasNumCharsAdded;
- (bool)hasNumCharsDeleted;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEmojiUsed;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)levenshteinEditDistance;
- (unsigned int)numCharsAdded;
- (unsigned int)numCharsDeleted;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEmojiUsed:(bool)arg1;
- (void)setHasLevenshteinEditDistance:(bool)arg1;
- (void)setHasNumCharsAdded:(bool)arg1;
- (void)setHasNumCharsDeleted:(bool)arg1;
- (void)setIsEmojiUsed:(bool)arg1;
- (void)setLevenshteinEditDistance:(unsigned int)arg1;
- (void)setNumCharsAdded:(unsigned int)arg1;
- (void)setNumCharsDeleted:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
