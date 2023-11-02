
@interface PKPaletteToolPickerContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    unsigned long long  _edgeLocation;
    double  _scalingFactor;
    PKPaletteToolPickerView * _toolPickerView;
    NSLayoutConstraint * _toolPickerViewBottomConstraint;
    NSLayoutConstraint * _toolPickerViewCenterXConstraint;
    NSLayoutConstraint * _toolPickerViewCenterYConstraint;
    NSLayoutConstraint * _toolPickerViewLeftConstraint;
    NSLayoutConstraint * _toolPickerViewRightConstraint;
    NSLayoutConstraint * _toolPickerViewTopConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewCenterYConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewRightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerViewTopConstraint;

- (void).cxx_destruct;
- (void)_updateUI;
- (unsigned long long)edgeLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (double)scalingFactor;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setToolPickerViewBottomConstraint:(id)arg1;
- (void)setToolPickerViewCenterXConstraint:(id)arg1;
- (void)setToolPickerViewCenterYConstraint:(id)arg1;
- (void)setToolPickerViewLeftConstraint:(id)arg1;
- (void)setToolPickerViewRightConstraint:(id)arg1;
- (void)setToolPickerViewTopConstraint:(id)arg1;
- (id)toolPickerView;
- (id)toolPickerViewBottomConstraint;
- (id)toolPickerViewCenterXConstraint;
- (id)toolPickerViewCenterYConstraint;
- (id)toolPickerViewLeftConstraint;
- (id)toolPickerViewRightConstraint;
- (id)toolPickerViewTopConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
