
@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate> {
    <AVTAvatarColorSliderContainerViewDelegate> * _delegate;
    NSArray * _layoutConstraints;
    AVTAvatarAttributeEditorSectionColorItem * _sectionItem;
    AVTColorSlider * _slider;
}

@property (nonatomic) <AVTAvatarColorSliderContainerViewDelegate> *delegate;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, retain) AVTAvatarAttributeEditorSectionColorItem *sectionItem;
@property (nonatomic, retain) AVTColorSlider *slider;

- (void).cxx_destruct;
- (void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2;
- (void)colorSlider:(id)arg1 valueChanged:(double)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 userInterfaceLayoutDirection:(long long)arg2;
- (id)layoutConstraints;
- (void)layoutSubviews;
- (id)sectionItem;
- (void)setDelegate:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setSectionItem:(id)arg1;
- (void)setSectionItem:(id)arg1 animated:(bool)arg2;
- (void)setSlider:(id)arg1;
- (id)slider;
- (void)updateSliderTrackLayerAnimated:(bool)arg1;
- (void)updateSliderWithColorPreset:(id)arg1 animated:(bool)arg2;

@end
