
@interface GKDecisionNode : NSObject {
    void * _node;
    GKDecisionTree * _tree;
}

- (void).cxx_destruct;
- (id)attribute;
- (id)branches;
- (id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithValue:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2;
- (id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)getNodeAtBranch:(id)arg1;
- (id)initWithNode:(void*)arg1 tree:(id)arg2;
- (void)setAttribute:(id)arg1;

@end
