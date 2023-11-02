
@interface CAMUtilityBar : UIView {
    CEKApertureSlider * _apertureSlider;
    CEKWheelScrubberView * _filterScrubberView;
    CEKSlider * _intensitySlider;
    unsigned long long  _visibleContent;
}

@property (nonatomic, retain) CEKApertureSlider *apertureSlider;
@property (nonatomic, retain) CEKWheelScrubberView *filterScrubberView;
@property (nonatomic, retain) CEKSlider *intensitySlider;
@property (nonatomic) unsigned long long visibleContent;

- (void).cxx_destruct;
- (void)_layoutFilterScrubberView;
- (void)_layoutPortraitApertureSlider;
- (void)_layoutSliderView:(id)arg1;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2;
- (void)_updateVisibleViewAnimated:(bool)arg1;
- (id)apertureSlider;
- (id)filterScrubberView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)intensitySlider;
- (void)layoutSubviews;
- (void)setApertureSlider:(id)arg1;
- (void)setFilterScrubberView:(id)arg1;
- (void)setIntensitySlider:(id)arg1;
- (void)setVisibleContent:(unsigned long long)arg1;
- (void)setVisibleContent:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)visibleContent;

@end
