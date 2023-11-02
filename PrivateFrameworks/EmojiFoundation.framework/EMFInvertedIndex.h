
@interface EMFInvertedIndex : NSObject {
    NSBundle * _assetBundle;
    NSDictionary * _documentIndex;
    NSURL * _documentIndexURL;
    <EMFIndexStrategy> * _strategy;
    NSDictionary * _termIndex;
    NSURL * _termIndexURL;
}

@property (nonatomic, retain) NSBundle *assetBundle;
@property (nonatomic, retain) NSDictionary *documentIndex;
@property (nonatomic, retain) NSURL *documentIndexURL;
@property (nonatomic, retain) <EMFIndexStrategy> *strategy;
@property (nonatomic, retain) NSDictionary *termIndex;
@property (nonatomic, retain) NSURL *termIndexURL;

- (void).cxx_destruct;
- (id)assetBundle;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)commonDocumentsForTerms:(id)arg1;
- (id)documentIndex;
- (id)documentIndexURL;
- (id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2;
- (id)postingsForTerm:(id)arg1;
- (void)setAssetBundle:(id)arg1;
- (void)setDocumentIndex:(id)arg1;
- (void)setDocumentIndexURL:(id)arg1;
- (void)setStrategy:(id)arg1;
- (void)setTermIndex:(id)arg1;
- (void)setTermIndexURL:(id)arg1;
- (id)strategy;
- (id)termIndex;
- (id)termIndexURL;
- (id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)termsForDocument:(id)arg1;

@end
