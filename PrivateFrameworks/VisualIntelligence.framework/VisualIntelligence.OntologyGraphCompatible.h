
@interface VisualIntelligence.OntologyGraphCompatible : NSObject {
    void ontologyGraph;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)findLeastCommonAncestorWithNode1:(id)arg1 node2:(id)arg2;
- (id)init;
- (bool)isDescendentWithDescendent:(id)arg1 ancestor:(id)arg2;
- (id)ontologyNodeWithKnowledgeGraphID:(id)arg1;

@end
