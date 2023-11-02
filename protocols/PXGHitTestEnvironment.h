
@protocol PXGHitTestEnvironment <NSObject>

@required

- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayout:(PXGLayout *)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayout:(PXGLayout *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayout:(PXGLayout *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayout:(PXGLayout *)arg2;
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (PXGHitTestResult *)hitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (PXGHitTestResult *)hitTestResultAtPoint:(void *)arg1 padding:(void *)arg2 passingTest:(void *)arg3; // needs 3 arg types, found 10: struct CGPoint { double x1; double x2; }, struct UIEdgeInsets { double x1; double x2; double x3; double x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned int, PXGLayout *, bool*, void*
- (NSArray *)hitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)hitTestResultsAtPoint:(void *)arg1 padding:(void *)arg2 passingTest:(void *)arg3; // needs 3 arg types, found 10: struct CGPoint { double x1; double x2; }, struct UIEdgeInsets { double x1; double x2; double x3; double x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned int, PXGLayout *, bool*, void*
- (NSArray *)hitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1 withIdentifiers:(NSArray *)arg2;
- (NSArray *)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(PXGSpriteReference *)arg2;
- (NSArray *)hitTestResultsInRect:(void *)arg1 passingTest:(void *)arg2; // needs 2 arg types, found 9: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned int, PXGLayout *, bool*, void*
- (void)installLayoutCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (PXRegionOfInterest *)regionOfInterestForHitTestResult:(PXGHitTestResult *)arg1;
- (PXRegionOfInterest *)regionOfInterestForObjectReference:(id)arg1;
- (PXRegionOfInterest *)regionOfInterestForSpriteReference:(PXGSpriteReference *)arg1;
- (struct CGImage { }*)textureSnapshotForSpriteReference:(PXGSpriteReference *)arg1;
- (<PXGReusableView> *)viewForSpriteReference:(PXGSpriteReference *)arg1;

@end
