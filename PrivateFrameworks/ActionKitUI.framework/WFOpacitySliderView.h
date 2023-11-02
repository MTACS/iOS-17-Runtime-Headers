
@interface WFOpacitySliderView : UIControl {
    UILabel * _opacityLabel;
    WFOpacitySlider * _slider;
}

@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) UILabel *opacityLabel;
@property (nonatomic, readonly) WFOpacitySlider *slider;

- (void).cxx_destruct;
- (void)didChangeOpacityValue:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (double)opacity;
- (id)opacityLabel;
- (void)reset;
- (id)slider;

@end
