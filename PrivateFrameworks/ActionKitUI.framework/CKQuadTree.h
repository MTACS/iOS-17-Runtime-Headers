
@interface CKQuadTree : NSObject {
    CKQuadTreeNode * _rootNode;
}

@property (nonatomic, readonly) CKQuadTreeNode *rootNode;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPoints:(id)arg1;
- (id)rootNode;
- (void)visit:(id /* block */)arg1;

@end
