
@interface SRUIFTreeNode : NSObject <NSFastEnumeration> {
    NSMutableArray * _childNodes;
    id  _item;
    SRUIFTreeNode * _parentNode;
}

@property (getter=_childNodes, nonatomic, readonly) NSMutableArray *childNodes;
@property (nonatomic, retain) id item;
@property (setter=_setParentNode:, nonatomic) SRUIFTreeNode *parentNode;

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;

- (void).cxx_destruct;
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)_childNodes;
- (void)_setParentNode:(id)arg1;
- (id)absoluteIndexPath;
- (void)addChildNode:(id)arg1;
- (id)childNodeAtIndex:(long long)arg1;
- (bool)containsNodeAtIndexPath:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)enumerateChildNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDescendentNodesUsingBlock:(id /* block */)arg1;
- (long long)indexOfChildNode:(id)arg1;
- (id)indexPathFromAncestorNode:(id)arg1;
- (id)indexPathOfNodeWithItem:(id)arg1;
- (id)init;
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;
- (id)item;
- (id)lastChildNode;
- (id)nodeAtIndexPath:(id)arg1;
- (long long)numberOfChildNodes;
- (id)parentNode;
- (void)removeChildNode:(id)arg1;
- (void)removeChildNodeAtIndex:(long long)arg1;
- (void)removeFromParentNode;
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;
- (void)setItem:(id)arg1;

@end
