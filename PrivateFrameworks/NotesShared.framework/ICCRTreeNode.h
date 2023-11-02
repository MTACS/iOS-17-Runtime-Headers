
@interface ICCRTreeNode : ICCRObject {
    NSArray * _children;
    ICCRTree * _tree;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic) ICCRTreeNode *parent;
@property (nonatomic, retain) ICCRWeakReference *parentRef;
@property (nonatomic) ICCRTree *tree;
@property (nonatomic, retain) id value;

+ (id)CRProperties;

- (void).cxx_destruct;
- (id)children;
- (id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isInLoop;
- (bool)isLoopNode;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)parent;
- (id)parentReference;
- (void)removeNode:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setTree:(id)arg1;
- (id)tree;

@end
