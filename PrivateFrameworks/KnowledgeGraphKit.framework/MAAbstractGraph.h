
@interface MAAbstractGraph : NSObject {
    NSMutableArray * _edges;
    NSMutableArray * _nodes;
}

- (void).cxx_destruct;
- (id)init;
- (id)insertEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 minimum:(unsigned long long)arg4 maximum:(unsigned long long)arg5 directed:(bool)arg6;
- (id)insertNodeWithLabel:(id)arg1;

@end
