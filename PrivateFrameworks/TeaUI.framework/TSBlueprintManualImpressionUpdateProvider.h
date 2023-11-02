
@interface TSBlueprintManualImpressionUpdateProvider : NSObject {
    void endImpressionsBlocks;
    void updateImpressionsBlocks;
    void visibleRectAccessor;
    void visibleViewAccessor;
}

- (void).cxx_destruct;
- (void)endImpressions;
- (id)init;
- (void)setVisibileViewAccessor:(id /* block */)arg1 visibleRectAccessor:(id /* block */)arg2;
- (void)updateImpressionsForView:(id)arg1 withVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
