
@interface HUCCFakeMosaicGridView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    NSMutableArray * _fakeCellLayers;
    <HUProvidesMosaicFrames> * _frameDelegate;
    HUMosaicLayoutGeometry * _mosaicLayoutGeometry;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, retain) NSMutableArray *fakeCellLayers;
@property (nonatomic) <HUProvidesMosaicFrames> *frameDelegate;
@property (nonatomic, retain) HUMosaicLayoutGeometry *mosaicLayoutGeometry;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)fakeCellLayers;
- (id)frameDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)mosaicLayoutGeometry;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFakeCellLayers:(id)arg1;
- (void)setFrameDelegate:(id)arg1;
- (void)setMosaicLayoutGeometry:(id)arg1;

@end
