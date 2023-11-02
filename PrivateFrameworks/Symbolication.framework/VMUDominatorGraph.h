
@interface VMUDominatorGraph : NSObject {
    unsigned int * _dominators;
    NSData * _dominators_data;
    unsigned int * _firstDominates;
    NSData * _firstDominates_data;
    unsigned int * _nextDominates;
    NSData * _nextDominates_data;
    unsigned int  _nodeNamespaceSize;
    VMUGraphEnumerator * _reverseGraphEnumerator;
}

@property (nonatomic) unsigned int*dominators;
@property (nonatomic, retain) NSData *dominators_data;
@property (nonatomic) unsigned int*firstDominates;
@property (nonatomic, retain) NSData *firstDominates_data;
@property (nonatomic) unsigned int*nextDominates;
@property (nonatomic, retain) NSData *nextDominates_data;
@property (nonatomic) unsigned int nodeNamespaceSize;

+ (id)callTreeWithGraph:(id)arg1 groupByType:(bool)arg2 showRegionVirtualSize:(bool)arg3 desiredAddress:(id)arg4 debugTimer:(id)arg5;
+ (id)callTreeWithGraph:(id)arg1 groupByType:(bool)arg2 showRegionVirtualSize:(bool)arg3 desiredClassesPattern:(id)arg4 debugTimer:(id)arg5;
+ (id)consolidate:(id)arg1;

- (void).cxx_destruct;
- (id)_computeDominators:(id)arg1 roots:(void*)arg2 reversePostOrder:(unsigned int*)arg3 debugTimer:(id)arg4;
- (void)_computeDominees:(id)arg1;
- (id)copyDict;
- (unsigned int)dominator:(unsigned int)arg1;
- (unsigned int*)dominators;
- (id)dominators_data;
- (void)enumerateDirectDomineesForNodeName:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateDominatorRootsWithBlock:(id /* block */)arg1;
- (void)enumerateDomineesForNodeName:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)export:(id)arg1;
- (id)fastDFS:(id /* block */)arg1 graph:(id)arg2;
- (unsigned int*)firstDominates;
- (id)firstDominates_data;
- (bool)hasAnyDirectDomineesForNodeName:(unsigned int)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithGraph:(id)arg1;
- (id)initWithGraph:(id)arg1 debugTimer:(id)arg2;
- (id)iterDirectDomineesForNodeName:(unsigned int)arg1;
- (id)iterDominatorRoots;
- (unsigned int*)nextDominates;
- (id)nextDominates_data;
- (unsigned int)nodeNamespaceSize;
- (void)setDominators:(unsigned int*)arg1;
- (void)setDominators_data:(id)arg1;
- (void)setFirstDominates:(unsigned int*)arg1;
- (void)setFirstDominates_data:(id)arg1;
- (void)setNextDominates:(unsigned int*)arg1;
- (void)setNextDominates_data:(id)arg1;
- (void)setNodeNamespaceSize:(unsigned int)arg1;

@end
