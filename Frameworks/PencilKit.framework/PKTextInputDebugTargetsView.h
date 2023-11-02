
@interface PKTextInputDebugTargetsView : UIView {
    double  _dashLinePhase;
    NSArray * _visualizationElements;
}

@property (nonatomic, copy) NSArray *visualizationElements;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualizationElements:(id)arg1;
- (id)visualizationElements;

@end
