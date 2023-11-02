
@interface SBDisplayItemLayoutGrid : NSObject <BSDescriptionProviding> {
    NSMutableDictionary * _gridCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_gridForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentOrientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (id)allGridHeightsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentOrientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (id)allGridWidthsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentOrientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })maxGridSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentOrientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (struct CGSize { double x1; double x2; })minGridSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentOrientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (struct CGSize { double x1; double x2; })nearestGridSizeForProposedSize:(struct CGSize { double x1; double x2; })arg1 countOnStage:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentOrientation:(long long)arg4 layoutRestrictionInfo:(id)arg5 screenScale:(double)arg6 chamoisLayoutAttributes:(id)arg7;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
