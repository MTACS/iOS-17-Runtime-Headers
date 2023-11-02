
@interface SISchemaUEIDictationAlternativeConfusionPairsSelected : SISchemaInstrumentationMessage {
    NSArray * _alternativeSelections;
    struct { 
        unsigned int numDeletions : 1; 
        unsigned int numInsertions : 1; 
        unsigned int numSubstitutions : 1; 
    }  _has;
    int  _numDeletions;
    int  _numInsertions;
    int  _numSubstitutions;
}

@property (nonatomic, copy) NSArray *alternativeSelections;
@property (nonatomic) bool hasNumDeletions;
@property (nonatomic) bool hasNumInsertions;
@property (nonatomic) bool hasNumSubstitutions;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numDeletions;
@property (nonatomic) int numInsertions;
@property (nonatomic) int numSubstitutions;

- (void).cxx_destruct;
- (void)addAlternativeSelections:(id)arg1;
- (id)alternativeSelections;
- (id)alternativeSelectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativeSelectionsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAlternativeSelections;
- (void)deleteAlternativeSelections;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (id)dictionaryRepresentation;
- (bool)hasNumDeletions;
- (bool)hasNumInsertions;
- (bool)hasNumSubstitutions;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numDeletions;
- (int)numInsertions;
- (int)numSubstitutions;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeSelections:(id)arg1;
- (void)setHasNumDeletions:(bool)arg1;
- (void)setHasNumInsertions:(bool)arg1;
- (void)setHasNumSubstitutions:(bool)arg1;
- (void)setNumDeletions:(int)arg1;
- (void)setNumInsertions:(int)arg1;
- (void)setNumSubstitutions:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
