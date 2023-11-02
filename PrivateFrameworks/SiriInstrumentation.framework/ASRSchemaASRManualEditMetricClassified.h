
@interface ASRSchemaASRManualEditMetricClassified : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numDeletions : 1; 
        unsigned int numInsertions : 1; 
        unsigned int numSubstitutions : 1; 
    }  _has;
    bool  _hasOriginalAsrId;
    int  _numDeletions;
    int  _numInsertions;
    int  _numSubstitutions;
    SISchemaUUID * _originalAsrId;
}

@property (nonatomic) bool hasNumDeletions;
@property (nonatomic) bool hasNumInsertions;
@property (nonatomic) bool hasNumSubstitutions;
@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numDeletions;
@property (nonatomic) int numInsertions;
@property (nonatomic) int numSubstitutions;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (void)deleteOriginalAsrId;
- (id)dictionaryRepresentation;
- (bool)hasNumDeletions;
- (bool)hasNumInsertions;
- (bool)hasNumSubstitutions;
- (bool)hasOriginalAsrId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numDeletions;
- (int)numInsertions;
- (int)numSubstitutions;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setHasNumDeletions:(bool)arg1;
- (void)setHasNumInsertions:(bool)arg1;
- (void)setHasNumSubstitutions:(bool)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setNumDeletions:(int)arg1;
- (void)setNumInsertions:(int)arg1;
- (void)setNumSubstitutions:(int)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
