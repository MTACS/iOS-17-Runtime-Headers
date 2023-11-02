
@interface BWInferenceSchedulerGraph : NSObject {
    NSMapTable * _directedEdgesByNode;
    <BWInferenceJobProvider> * _head;
}

- (void)dealloc;
- (void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2;
- (void)visitProvidersWithBlock:(id /* block */)arg1;

@end
