
@interface PXGDebugHUDLayer : CALayer {
    NSArray * _graphLayers;
    struct CGColor { } * _green;
    struct CGColor { } * _red;
    struct CGColor { } * _yellow;
}

@property (nonatomic, copy) NSArray *graphLayers;
@property (nonatomic) struct CGColor { }*green;
@property (nonatomic) struct CGColor { }*red;
@property (nonatomic) struct CGColor { }*yellow;

- (void).cxx_destruct;
- (void)dealloc;
- (id)graphLayers;
- (struct CGColor { }*)green;
- (id)init;
- (struct CGColor { }*)red;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGraphLayers:(id)arg1;
- (void)setGreen:(struct CGColor { }*)arg1;
- (void)setRed:(struct CGColor { }*)arg1;
- (void)setYellow:(struct CGColor { }*)arg1;
- (void)updateDebugHUDWithStats:(struct { double x1[6]; double x2[6]; long long x3[6]; double x4[6]; double x5[6]; }*)arg1;
- (void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4;
- (struct CGColor { }*)yellow;

@end
