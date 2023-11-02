
@interface VKDebugTreeDataNode : VKDebugTreeNode {
    const void * _node;
}

- (void)buildChildren;
- (id)initWithDebugTreeNode:(const void*)arg1 withParent:(id)arg2;
- (bool)isExpandable;
- (id)name;
- (id)propertyColumn;
- (long long)propertyCount;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;

@end
