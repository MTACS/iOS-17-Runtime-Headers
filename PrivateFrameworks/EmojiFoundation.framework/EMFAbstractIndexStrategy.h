
@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy> {
    NSDictionary * _documentIndex;
    NSDictionary * _termIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *documentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *termIndex;

- (void).cxx_destruct;
- (void)assertMethodNeedsConcreteImplementation:(SEL)arg1;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)commonDocumentsForTerms:(id)arg1;
- (id)documentIndex;
- (id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2;
- (id)postingsForTerm:(id)arg1;
- (void)setDocumentIndex:(id)arg1;
- (void)setTermIndex:(id)arg1;
- (id)termIndex;
- (id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)termsForDocument:(id)arg1;

@end
