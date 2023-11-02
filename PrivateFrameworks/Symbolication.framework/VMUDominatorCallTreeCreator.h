
@interface VMUDominatorCallTreeCreator : NSObject {
    VMUCallTreeRoot * _callTreeRoot;
    VMUDebugTimer * _debugTimer;
    NSNumber * _desiredAddress;
    VMUClassPatternMatcher * _desiredClassesPattern;
    VMUDominatorGraph * _dominatorGraph;
    bool  _groupByType;
    VMUProcessObjectGraph * _processObjectGraph;
    bool  _showRegionVirtualSize;
    void * _visitedNodes;
}

@property (retain) VMUCallTreeRoot *callTreeRoot;
@property (retain) NSNumber *desiredAddress;
@property (retain) VMUClassPatternMatcher *desiredClassesPattern;
@property (retain) VMUDominatorGraph *dominatorGraph;
@property (retain) VMUProcessObjectGraph *processObjectGraph;

- (void).cxx_destruct;
- (id)_addNodeWithNodeName:(unsigned int)arg1 nodeInfo:(struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg2 callTreeParentNode:(id)arg3 parentNodeName:(unsigned int)arg4 parentNodeType:(unsigned int)arg5 reference:(struct { struct { /* ? */ } *x1; struct { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; } x2; struct { /* ? */ } *x3; }*)arg6;
- (void)buildCallTreeWithNodeName:(unsigned int)arg1 callTreeParentNode:(id)arg2 parentNodeName:(unsigned int)arg3 parentNodeType:(unsigned int)arg4 reference:(struct { struct { /* ? */ } *x1; struct { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; } x2; struct { /* ? */ } *x3; }*)arg5 rootNodeFilter:(id /* block */)arg6;
- (void)buildCallTreeWithRootNodeNames:(id)arg1;
- (id)callTreeRoot;
- (id)callTreeWithGraph:(id)arg1 groupByType:(bool)arg2 showRegionVirtualSize:(bool)arg3 debugTimer:(id)arg4;
- (id)desiredAddress;
- (id)desiredClassesPattern;
- (id)dominatorGraph;
- (id)groupByNodeNameForNode:(unsigned int)arg1 parentNodeName:(unsigned int)arg2 parentNodeType:(unsigned int)arg3 reference:(const struct { struct { /* ? */ } *x1; struct { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; } x2; struct { /* ? */ } *x3; }*)arg4;
- (id)groupByTypeNameForNode:(unsigned int)arg1;
- (id)processObjectGraph;
- (id)referenceDecriptionForSourceNodeAddress:(unsigned long long)arg1 referenceInfo:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg2;
- (id)remainingNodeNames;
- (void)removeJunkEdges;
- (void*)removeJunkNodes;
- (void)setCallTreeRoot:(id)arg1;
- (void)setDesiredAddress:(id)arg1;
- (void)setDesiredClassesPattern:(id)arg1;
- (void)setDominatorGraph:(id)arg1;
- (void)setProcessObjectGraph:(id)arg1;
- (unsigned long long)sizeForNodeName:(unsigned int)arg1 nodeInfo:(struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg2;

@end
