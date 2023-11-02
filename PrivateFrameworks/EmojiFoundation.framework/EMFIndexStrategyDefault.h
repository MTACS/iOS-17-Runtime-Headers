
@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy

- (double)_calculateCumulativeTermWeightForQueryTokenCounts:(id)arg1 inDocumentID:(id)arg2;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)commonDocumentsForTerms:(id)arg1;
- (id)postingsForTerm:(id)arg1;
- (id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)termsForDocument:(id)arg1;

@end
