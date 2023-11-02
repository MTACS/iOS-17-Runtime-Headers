
@interface VMUGraphEnumerator : NSObject {
    VMUProcessObjectGraph * _graph;
}

@property (readonly) VMUProcessObjectGraph *graph;

- (void).cxx_destruct;
- (unsigned int*)buildReversePostOrderWithRoots:(void*)arg1;
- (void*)destinationsOfGroup:(id)arg1;
- (void*)destinationsOfNodes:(void*)arg1;
- (void)enumerateDestinationsOfGroup:(id)arg1 groupedBy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateDestinationsOfNode:(unsigned int)arg1 groupedBy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateDestinationsOfNodes:(void*)arg1 groupedBy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (id)statusDisplayDescription;

@end
