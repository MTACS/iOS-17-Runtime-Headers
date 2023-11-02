
@interface EMFIndexStrategySingleStemmedIndexOnly : EMFAbstractIndexStrategy

- (id)_calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)_commonDocumentsForTerms:(id)arg1;
- (id)_postingsForTerm:(id)arg1;
- (id)_postingsForTerms:(id)arg1;
- (id)_termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)_termsForDocument:(id)arg1;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)commonDocumentsForTerms:(id)arg1;
- (id)postingsForTerm:(id)arg1;
- (id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)termsForDocument:(id)arg1;

@end
