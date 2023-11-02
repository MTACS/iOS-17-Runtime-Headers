
@interface PGMeaningfulEventCollectionTrait : PGMeaningfulEventTrait {
    id /* block */  _additionalMatchingBlock;
    PGGraphNodeCollection * _negativeNodes;
    PGGraphNodeCollection * _nodes;
}

@property (nonatomic, copy) id /* block */ additionalMatchingBlock;
@property (nonatomic, readonly) PGGraphNodeCollection *negativeNodes;
@property (nonatomic, readonly) PGGraphNodeCollection *nodes;

- (void).cxx_destruct;
- (id /* block */)additionalMatchingBlock;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (bool)isActive;
- (id)negativeNodes;
- (id)nodes;
- (void)setAdditionalMatchingBlock:(id /* block */)arg1;

@end
