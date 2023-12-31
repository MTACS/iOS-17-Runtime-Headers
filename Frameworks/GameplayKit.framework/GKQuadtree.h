
@interface GKQuadtree : NSObject {
    void * _cQuadTree;
}

+ (id)quadtreeWithBoundingQuad:(struct GKQuad { })arg1 minimumCellSize:(float)arg2;

- (id)addElement:(void *)arg1 withPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (id)addElement:(id)arg1 withQuad:(struct GKQuad { })arg2;
- (void)dealloc;
- (id)elementsAtPoint;
- (id)elementsInQuad:(struct GKQuad { })arg1;
- (id)init;
- (id)initWithBoundingQuad:(struct GKQuad { })arg1 minimumCellSize:(float)arg2;
- (bool)removeElement:(id)arg1;
- (bool)removeElement:(id)arg1 withNode:(id)arg2;

@end
