
@interface VKDebugTreeNode : NSObject {
    NSArray * _children;
    VKDebugTreeNode * _parent;
}

@property (retain) NSArray *children;
@property (readonly) NSString *name;
@property (readonly) VKDebugTreeNode *parent;

- (void).cxx_destruct;
- (id)children;
- (id)initWithParent:(id)arg1;
- (bool)isExpandable;
- (id)name;
- (id)parent;
- (id)propertyColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (void)setChildren:(id)arg1;
- (id)tagsColumn;
- (id)valueColumn;

@end
