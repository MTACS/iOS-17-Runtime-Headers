
@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {
    NSArray * _connections;
    NSMutableArray * _finalNodes;
    NSArray * _nodes;
}

@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, readonly) NSArray *nodes;

- (void).cxx_destruct;
- (id)connections;
- (void)evaluate;
- (id)initWithNodes:(id)arg1 connections:(id)arg2;
- (id)nodes;

@end
