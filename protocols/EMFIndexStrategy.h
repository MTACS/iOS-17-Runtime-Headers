
@protocol EMFIndexStrategy <NSObject>

@required

- (NSDictionary *)calculateDocumentWeightsForQueryTokenCounts:(NSDictionary *)arg1;
- (NSSet *)commonDocumentsForTerms:(NSArray *)arg1;
- (NSArray *)postingsForTerm:(NSString *)arg1;
- (NSNumber *)termWeightForTerm:(NSString *)arg1 inDocument:(NSNumber *)arg2;
- (NSDictionary *)termsForDocument:(NSNumber *)arg1;

@end
