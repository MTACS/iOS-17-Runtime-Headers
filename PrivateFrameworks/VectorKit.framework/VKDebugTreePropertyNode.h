
@interface VKDebugTreePropertyNode : VKDebugTreeNode {
    const void * _property;
}

- (id)idValueForTreeValue:(const void*)arg1;
- (id)initWithDebugTreeProperty:(const void*)arg1 withParent:(id)arg2;
- (id)name;
- (id)propertyColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;

@end
