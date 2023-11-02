
@interface GKOctreeNode : NSObject {
    void * _cOctreeNode;
}

@property (readonly) struct GKBox { } box;

- (struct GKBox { })box;
- (void*)cOctreeNode;
- (void)setCOctreeNode:(void*)arg1;

@end
