
@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying> {
    NSMutableArray * _enumeratorStack;
    NATreeNode * _node;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly, copy) NATreeNode *node;

- (void).cxx_destruct;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithNode:(id)arg1;
- (id)nextObject;
- (id)node;

@end
