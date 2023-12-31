
@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate> {
    CALayer * _equationLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CALayer *equationLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)equationLayer;
- (void)screenScaleDidChange;
- (void)setEquationLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForTilingLayer:(id)arg1;
- (void)willBeRemoved;

@end
