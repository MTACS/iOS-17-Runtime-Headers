
@interface CLPInstSchemaServiceNodeComparatorResult : SISchemaInstrumentationMessage {
    int  _comparatorName;
    struct { 
        unsigned int comparatorName : 1; 
        unsigned int isValidOriginalItem : 1; 
        unsigned int isValidReplayedItem : 1; 
        unsigned int isMatched : 1; 
    }  _has;
    bool  _isMatched;
    bool  _isValidOriginalItem;
    bool  _isValidReplayedItem;
    NSArray * _mismatchedFields;
}

@property (nonatomic) int comparatorName;
@property (nonatomic) bool hasComparatorName;
@property (nonatomic) bool hasIsMatched;
@property (nonatomic) bool hasIsValidOriginalItem;
@property (nonatomic) bool hasIsValidReplayedItem;
@property (nonatomic) bool isMatched;
@property (nonatomic) bool isValidOriginalItem;
@property (nonatomic) bool isValidReplayedItem;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *mismatchedFields;

- (void).cxx_destruct;
- (void)addMismatchedFields:(unsigned long long)arg1;
- (void)clearMismatchedFields;
- (int)comparatorName;
- (void)deleteComparatorName;
- (void)deleteIsMatched;
- (void)deleteIsValidOriginalItem;
- (void)deleteIsValidReplayedItem;
- (void)deleteMismatchedFields;
- (id)dictionaryRepresentation;
- (bool)hasComparatorName;
- (bool)hasIsMatched;
- (bool)hasIsValidOriginalItem;
- (bool)hasIsValidReplayedItem;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMatched;
- (bool)isValidOriginalItem;
- (bool)isValidReplayedItem;
- (id)jsonData;
- (id)mismatchedFields;
- (unsigned long long)mismatchedFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mismatchedFieldsCount;
- (bool)readFrom:(id)arg1;
- (void)setComparatorName:(int)arg1;
- (void)setHasComparatorName:(bool)arg1;
- (void)setHasIsMatched:(bool)arg1;
- (void)setHasIsValidOriginalItem:(bool)arg1;
- (void)setHasIsValidReplayedItem:(bool)arg1;
- (void)setIsMatched:(bool)arg1;
- (void)setIsValidOriginalItem:(bool)arg1;
- (void)setIsValidReplayedItem:(bool)arg1;
- (void)setMismatchedFields:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
