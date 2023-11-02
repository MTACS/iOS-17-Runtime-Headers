
@interface HUSliderControlCell : HUControlPanelCell {
    NSArray * _sliderConstraints;
    HUSimpleSliderControlView * _sliderView;
}

@property (nonatomic, copy) NSArray *sliderConstraints;
@property (nonatomic, retain) HUSimpleSliderControlView *sliderView;

- (void).cxx_destruct;
- (void)_updateSliderConstraints;
- (id)allControlViews;
- (void)prepareForReuse;
- (void)setSliderConstraints:(id)arg1;
- (void)setSliderView:(id)arg1;
- (id)sliderConstraints;
- (id)sliderView;

@end
