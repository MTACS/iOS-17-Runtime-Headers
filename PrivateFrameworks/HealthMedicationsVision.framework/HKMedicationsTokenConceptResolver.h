
@interface HKMedicationsTokenConceptResolver : NSObject {
    <HKMedicationsAssetInterface> * _assetInterface;
    HKMedicationsTokenizer * _tokenizer;
}

@property (nonatomic, retain) <HKMedicationsAssetInterface> *assetInterface;
@property (nonatomic, retain) HKMedicationsTokenizer *tokenizer;

- (void).cxx_destruct;
- (id)_collectAllMedicationCandidatesUsingTokens:(id)arg1;
- (id)_expandedMedicationsFromCandidates:(id)arg1;
- (double)_tokenMatchScoreForMedication:(id)arg1 usingTokens:(id)arg2;
- (id)assetInterface;
- (id)initWithAssetInterface:(id)arg1;
- (id)rankMedicationsUsingTokens:(id)arg1 candidates:(id)arg2;
- (id)recognizedMedicationsFromTextBlock:(id)arg1;
- (id)recognizedMedicationsFromTranscript:(id)arg1;
- (id)removeMedicationsFromNoisyTokensUsingTokens:(id)arg1 candidates:(id)arg2;
- (id)removeStowawayIngredientsUsingTokens:(id)arg1 candidates:(id)arg2;
- (void)setAssetInterface:(id)arg1;
- (void)setTokenizer:(id)arg1;
- (id)tokenizer;

@end
