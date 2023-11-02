
@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController {
    <PKPaletteErasingAttributesViewControllerDelegate> * _delegate;
    bool  _hideWeightPicker;
}

@property (nonatomic) <PKPaletteErasingAttributesViewControllerDelegate> *delegate;
@property (nonatomic) long long eraserType;
@property (nonatomic) bool hideWeightPicker;
@property (nonatomic) double weight;

+ (double)_preferredContentSizeWidth;

- (void).cxx_destruct;
- (id)_attributesView;
- (bool)_canShowWhileLocked;
- (void)_segmentedControlDidChangeValue:(id)arg1;
- (void)_thicknessValueChanged:(id)arg1;
- (id)delegate;
- (long long)eraserType;
- (bool)hideWeightPicker;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setEraserType:(long long)arg1;
- (void)setHideWeightPicker:(bool)arg1;
- (void)setWeight:(double)arg1;
- (void)viewDidLoad;
- (double)weight;

@end
