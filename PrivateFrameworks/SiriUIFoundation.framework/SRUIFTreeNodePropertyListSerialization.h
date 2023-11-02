
@interface SRUIFTreeNodePropertyListSerialization : NSObject

- (id)_propertyListWithTreeNode:(id)arg1 itemPropertyListCreation:(id /* block */)arg2;
- (id)_treeNodeWithPropertyList:(id)arg1 error:(id*)arg2 itemCreation:(id /* block */)arg3;
- (id)propertyListWithTreeNode:(id)arg1 itemPropertyListCreation:(id /* block */)arg2;
- (id)treeNodeWithPropertyList:(id)arg1 error:(id*)arg2 itemCreation:(id /* block */)arg3;

@end
