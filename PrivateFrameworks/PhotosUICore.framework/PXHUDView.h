
@interface PXHUDView : UIView {
    UIStackView * _stackView;
    NSMapTable * _visualizationToView;
}

@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSMapTable *visualizationToView;

+ (Class)visualizationClassToViewClass:(Class)arg1;

- (void).cxx_destruct;
- (void)addVisualization:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeVisualization:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setVisualizationToView:(id)arg1;
- (id)stackView;
- (id)visualizationToView;

@end
