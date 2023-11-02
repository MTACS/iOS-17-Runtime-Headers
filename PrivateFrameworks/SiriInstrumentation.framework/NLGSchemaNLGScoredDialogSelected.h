
@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage {
    NLGSchemaNLGDialogCandidateStatistics * _dialogCandidateStatistics;
    NLGSchemaNLGDialogScorer * _dialogScorer;
    bool  _hasDialogCandidateStatistics;
    bool  _hasDialogScorer;
    bool  _hasSelectedScoredDialog;
    NLGSchemaNLGScoredDialog * _selectedScoredDialog;
}

@property (nonatomic, retain) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics;
@property (nonatomic, retain) NLGSchemaNLGDialogScorer *dialogScorer;
@property (nonatomic) bool hasDialogCandidateStatistics;
@property (nonatomic) bool hasDialogScorer;
@property (nonatomic) bool hasSelectedScoredDialog;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLGSchemaNLGScoredDialog *selectedScoredDialog;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDialogCandidateStatistics;
- (void)deleteDialogScorer;
- (void)deleteSelectedScoredDialog;
- (id)dialogCandidateStatistics;
- (id)dialogScorer;
- (id)dictionaryRepresentation;
- (bool)hasDialogCandidateStatistics;
- (bool)hasDialogScorer;
- (bool)hasSelectedScoredDialog;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)selectedScoredDialog;
- (void)setDialogCandidateStatistics:(id)arg1;
- (void)setDialogScorer:(id)arg1;
- (void)setHasDialogCandidateStatistics:(bool)arg1;
- (void)setHasDialogScorer:(bool)arg1;
- (void)setHasSelectedScoredDialog:(bool)arg1;
- (void)setSelectedScoredDialog:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
