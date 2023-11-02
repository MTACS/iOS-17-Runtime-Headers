
@interface PUParallaxLayerStackDebugStyleTableViewCell : UITableViewCell {
    UIColorWell * _colorButton1;
    UIColorWell * _colorButton2;
    UISlider * _colorSlider;
    UIView * _controlsView;
    <PUParallaxLayerStackDebugStyleTableViewCellDelegate> * _styleCellDelegate;
    NSString * _styleKind;
    UISegmentedControl * _tonalityControl;
}

@property (nonatomic, retain) UIColorWell *colorButton1;
@property (nonatomic, retain) UIColorWell *colorButton2;
@property (nonatomic, retain) UISlider *colorSlider;
@property (nonatomic, retain) UIView *controlsView;
@property (nonatomic) <PUParallaxLayerStackDebugStyleTableViewCellDelegate> *styleCellDelegate;
@property (nonatomic, retain) NSString *styleKind;
@property (nonatomic, retain) UISegmentedControl *tonalityControl;

- (void).cxx_destruct;
- (void)applyToStyle:(id)arg1;
- (id)colorButton1;
- (id)colorButton2;
- (id)colorButtonWithColor:(id)arg1 title:(id)arg2;
- (id)colorSlider;
- (id)controlsView;
- (id)intensitySliderWithWidth:(double)arg1;
- (id)newTonalityControl;
- (void)rebuildControlsViewForStyle:(id)arg1;
- (void)setColorButton1:(id)arg1;
- (void)setColorButton2:(id)arg1;
- (void)setColorSlider:(id)arg1;
- (void)setControlsView:(id)arg1;
- (void)setStyleCellDelegate:(id)arg1;
- (void)setStyleKind:(id)arg1;
- (void)setTonalityControl:(id)arg1;
- (id)styleCellDelegate;
- (id)styleKind;
- (id)tonalityControl;
- (void)updateColor:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateSlider:(id)arg1;

@end
