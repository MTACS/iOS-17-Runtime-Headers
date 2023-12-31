
@interface TSDConnectionLineInfo : TSDShapeInfo {
    TSDDrawableInfo * mConnectedFrom;
    TSDDrawableInfo * mConnectedTo;
    struct { 
        unsigned int connectedFrom : 1; 
        unsigned int connectedTo : 1; 
    }  mInvalidFlags;
}

@property (nonatomic, retain) TSDDrawableInfo *connectedFrom;
@property (nonatomic, retain) TSDDrawableInfo *connectedTo;

- (void)acceptVisitor:(id)arg1;
- (bool)canAnchor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeLayoutFullTransform;
- (id)computeLayoutInfoGeometry;
- (void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2;
- (id)connectedFrom;
- (id)connectedTo;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (Class)layoutClass;
- (void)performBlockWithTemporaryLayout:(id /* block */)arg1;
- (id)presetKind;
- (Class)repClass;
- (void)setConnectedFrom:(id)arg1;
- (void)setConnectedTo:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
