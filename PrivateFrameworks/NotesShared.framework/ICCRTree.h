
@interface ICCRTree : ICCRObject

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) ICCROrderedSet *nodes;
@property (nonatomic, readonly) ICCRTreeNode *root;

+ (id)CRProperties;

- (void)computeChildren;
- (long long)count;
- (id)init;
- (id)initWithICCRCoder:(id)arg1;
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)invalidateChildren;
- (void)mergeWith:(id)arg1;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)nodes;
- (void)removeNode:(id)arg1;
- (id)root;
- (void)setDocument:(id)arg1;
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;

@end
