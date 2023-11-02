
@interface UPUsoSerializer : NSObject {
    struct shared_ptr<siri::ontology::UsoVocabManager> { 
        struct UsoVocabManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _usoVocabManager;
}

+ (id)_convertBundleIdToEntity:(id)arg1;
+ (id)_groupHigherLevelEntities:(id)arg1;
+ (id)_intermediateNodeRepresentations:(struct vector<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> { void *x1; void *x2; struct __compressed_pair<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>> *, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> { void *x_3_1_1; } x3; })arg1;
+ (id)_leafNodeFromGraphEdge:(const void*)arg1 andGraphNode:(const struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg2;
+ (id)_leafNodeFromLabel:(id)arg1 andGraphSemanticValueNode:(const void*)arg2;
+ (id)_leafNodeFromLabel:(id)arg1 andGraphStringNode:(const void*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addPathForLabel:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 semanticValue:(id)arg4 sharedEntityGraph:(id)arg5 toGraphNode:(struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg6 forGraph:(void*)arg7;
- (void)_attachSharedEntity:(id)arg1 withCustomEntityEdge:(const void*)arg2 toGraphNode:(struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg3 forGraph:(void*)arg4;
- (void)_insertHigherLevelEntities:(id)arg1 intoGraph:(void*)arg2 underTaskNode:(struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg3;
- (void)_insertSimpleEntity:(id)arg1 intoGraph:(void*)arg2 underTaskNode:(struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg3;
- (id)deserializeFromSerializedGraph:(id)arg1;
- (id)init;
- (id)serializeFromIntent:(id)arg1 andEntities:(id)arg2 forBundleId:(id)arg3;

@end
