
@interface PGZeroKeywordMapping : NSObject {
    PGGraphMeaningNode * _displayNode;
    NSArray * _mappedMeaningNodes;
}

@property (nonatomic, readonly) PGGraphMeaningNode *displayNode;
@property (nonatomic, readonly) NSArray *mappedMeaningNodes;

- (void).cxx_destruct;
- (id)displayNode;
- (id)initWithDisplayNode:(id)arg1 mappedMeaningNodes:(id)arg2;
- (id)mappedMeaningNodes;

@end
