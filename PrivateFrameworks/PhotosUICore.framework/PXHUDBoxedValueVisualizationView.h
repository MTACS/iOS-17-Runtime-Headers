
@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {
    UILabel * _titleAndValueLabel;
}

@property (nonatomic, retain) PXHUDBoxedValueVisualization *visualization;

- (void).cxx_destruct;
- (void)_updateTitleAndValueLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)visualizationDidUpdate;

@end
