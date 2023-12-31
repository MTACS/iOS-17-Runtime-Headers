
@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset> {
    int  mInterest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addInterest;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (bool)canApplyToCALayer;
- (bool)canApplyToCALayerByAddingSublayers;
- (bool)canApplyToCAShapeLayer;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (int)fillType;
- (void)i_flushCaches;
- (bool)isClear;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (bool)isThemeEquivalent:(id)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(bool)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)referenceColor;
- (void)removeInterest;
- (bool)shouldBeReappliedToCALayer:(id)arg1;

@end
