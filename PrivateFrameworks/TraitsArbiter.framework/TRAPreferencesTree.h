
@interface TRAPreferencesTree : NSObject <BSDescriptionProviding, TRAPreferencesTree> {
    NSString * _debugName;
    bool  _isFlatTree;
    NSArray * _rootChildren;
    long long  _traversalType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFlatTree;
@property (readonly) Class superclass;
@property (nonatomic) long long traversalType;

+ (id)treeWithNodesSpecifications:(id)arg1 traversalType:(long long)arg2 debugName:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithRootChildren:(id)arg1 traversalType:(long long)arg2 debugName:(id)arg3;
- (id)_recursiveDescriptionWithChildrenInZOrder:(bool)arg1;
- (id)debugDescription;
- (id)debugName;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isFlatTree;
- (id)participantsTopologicalSort;
- (id)recursiveDescription;
- (void)setIsFlatTree:(bool)arg1;
- (void)setTraversalType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)topologicalSort;
- (long long)traversalType;

@end
