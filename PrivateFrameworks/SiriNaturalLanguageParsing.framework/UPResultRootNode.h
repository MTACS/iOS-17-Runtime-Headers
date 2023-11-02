
@interface UPResultRootNode : UPResultNode {
    NSArray * _directLeafNodes;
    NSArray * _intermediateNodes;
}

@property (readonly, copy) NSArray *directLeafNodes;
@property (readonly, copy) NSArray *intermediateNodes;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)directLeafNodes;
- (id)initWithLabel:(id)arg1 intermediateNodes:(id)arg2 directLeafNodes:(id)arg3;
- (id)intermediateNodes;

@end
