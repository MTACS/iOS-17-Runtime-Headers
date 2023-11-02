
@interface FMFindingUI.FMPFARSCNView : ARSCNView {
    void innerIsolationQueue;
    void internalIsolationQueue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool drawsCameraImage;

- (void).cxx_destruct;
- (void)_drawAtTime:(double)arg1;
- (id)description;
- (bool)drawsCameraImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
