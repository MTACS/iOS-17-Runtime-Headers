
@interface VIOntologyGraph : NSObject {
    _TtC18VisualIntelligence23OntologyGraphCompatible * _compatGraph;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)findLeastCommonAncestorWithNode1:(id)arg1 node2:(id)arg2;
- (id)initWithOntologyGraph:(id)arg1;
- (bool)isDescendentWithDescendent:(id)arg1 ancestor:(id)arg2;
- (id)ontologyNodeWithKnowledgeGraphID:(id)arg1;

@end
