
@interface TSDAbstractLayout : NSObject {
    NSMutableArray * mChildren;
    TSDLayoutGeometry * mGeometry;
    struct CGPoint { 
        double x; 
        double y; 
    }  mInterimPosition;
    bool  mInterimPositionXSet;
    bool  mInterimPositionYSet;
    struct CGPoint { 
        double x; 
        double y; 
    }  mLastInterimPosition;
    bool  mLastInterimPositionXSet;
    bool  mLastInterimPositionYSet;
    TSDAbstractLayout * mParent;
}

@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) TSDLayoutGeometry *geometry;
@property (nonatomic) double interimPositionX;
@property (nonatomic) double interimPositionY;
@property (nonatomic) TSDAbstractLayout *parent;
@property (nonatomic, readonly) TSDAbstractLayout *root;

- (void)addChild:(id)arg1;
- (void)addDescendentLayoutsToArray:(id)arg1;
- (void)addLayoutsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toArray:(id)arg2 deep:(bool)arg3;
- (void)addLayoutsToArray:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameInRoot;
- (struct CGPoint { double x1; double x2; })alignmentFrameOriginForFixingInterimPosition;
- (bool)canRotateChildLayout:(id)arg1;
- (id)children;
- (void)dealloc;
- (id)delegateConformingToProtocol:(id)arg1 forLayout:(id)arg2;
- (void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2;
- (void)fixTransformFromInterimPosition;
- (void)fixTransformFromLastInterimPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCulling;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInParent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInRoot;
- (id)geometry;
- (id)geometryForTransforming;
- (id)geometryInParent;
- (id)geometryInRoot;
- (id)geometryInRoot:(id)arg1;
- (id)init;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (double)interimPositionX;
- (double)interimPositionY;
- (bool)isAxisAlignedUnflippedInRoot;
- (bool)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint { double x1; double x2; })arg1 interimPositionXSet:(bool)arg2 interimPositionYSet:(bool)arg3;
- (id)parent;
- (id)parentLayoutForProvidingGuides;
- (struct CGPoint { double x1; double x2; })positionInRootForAttachmentPositioner;
- (bool)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInParent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRoot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeFromParent;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)root;
- (void)setChildren:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setInterimPositionX:(double)arg1;
- (void)setInterimPositionY:(double)arg1;
- (void)setParent:(id)arg1;
- (bool)shouldSnapWhileResizing;
- (bool)supportsFlipping;
- (bool)supportsInspectorPositioning;
- (bool)supportsParentRotation;
- (bool)supportsResize;
- (bool)supportsRotation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformInParent;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformInRoot;
- (id)visibleGeometries;

@end
