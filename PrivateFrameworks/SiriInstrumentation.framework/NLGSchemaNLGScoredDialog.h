
@interface NLGSchemaNLGScoredDialog : SISchemaInstrumentationMessage {
    NSString * _catFamily;
    NSString * _catIdentifier;
    struct { 
        unsigned int score : 1; 
    }  _has;
    bool  _hasCatFamily;
    bool  _hasCatIdentifier;
    bool  _hasScoredDialogIdentifier;
    float  _score;
    NSString * _scoredDialogIdentifier;
}

@property (nonatomic, copy) NSString *catFamily;
@property (nonatomic, copy) NSString *catIdentifier;
@property (nonatomic) bool hasCatFamily;
@property (nonatomic) bool hasCatIdentifier;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasScoredDialogIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float score;
@property (nonatomic, copy) NSString *scoredDialogIdentifier;

- (void).cxx_destruct;
- (id)catFamily;
- (id)catIdentifier;
- (void)deleteCatFamily;
- (void)deleteCatIdentifier;
- (void)deleteScore;
- (void)deleteScoredDialogIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasCatFamily;
- (bool)hasCatIdentifier;
- (bool)hasScore;
- (bool)hasScoredDialogIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)score;
- (id)scoredDialogIdentifier;
- (void)setCatFamily:(id)arg1;
- (void)setCatIdentifier:(id)arg1;
- (void)setHasCatFamily:(bool)arg1;
- (void)setHasCatIdentifier:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasScoredDialogIdentifier:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setScoredDialogIdentifier:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
