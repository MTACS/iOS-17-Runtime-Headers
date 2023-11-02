
@interface GKQuadtreeNode : NSObject {
    void * _cQuadTreeNode;
    struct GKQuad { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*quadMin; 
    }  _quad;
}

@property (nonatomic, readonly) struct GKQuad { } quad;

- (void*)cQuadTreeNode;
- (void)max;
- (void)min;
- (struct GKQuad { })quad;
- (void)setCQuadTreeNode:(void*)arg1;

@end
