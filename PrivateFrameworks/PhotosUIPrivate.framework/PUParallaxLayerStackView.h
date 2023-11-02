
@interface PUParallaxLayerStackView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _motionVector;
    PUParallaxLayerStackViewModel * _viewModel;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } motionVector;
@property (nonatomic, retain) PUParallaxLayerStackViewModel *viewModel;

- (void).cxx_destruct;
- (void)_updateContainerFrame;
- (struct CGPoint { double x1; double x2; })motionVector;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMotionVector:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
