
@protocol SBTreeNode <NSObject, SBHUniquelyIdentifiable, SBHUniqueIdentifierQueryable>

@required

- (void)ancestryDidChange;
- (NSArray *)children;
- (<SBTreeNode> *)parent;
- (void)setParent:(id <SBTreeNode>)arg1;

@end
