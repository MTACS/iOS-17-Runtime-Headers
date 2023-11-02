
@interface UPResultIntermediateNode : UPResultNode {
    NSArray * _leafNodes;
}

@property (readonly, copy) NSArray *leafNodes;

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 andLeafNodes:(id)arg2;
- (id)leafNodes;

@end
