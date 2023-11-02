
@interface WFTriggerPercentageSliderCell : UITableViewCell {
    <WFTriggerPercentageSliderCellDelegate> * _delegate;
    UILabel * _label;
    UISlider * _slider;
    double  _stepValue;
}

@property (nonatomic) <WFTriggerPercentageSliderCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UISlider *slider;
@property (nonatomic) double sliderValue;
@property (nonatomic) double stepValue;

- (void).cxx_destruct;
- (void)configureWithInitialValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3 stepValue:(double)arg4;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (double)roundValue:(double)arg1 toNearestStep:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSliderValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (id)slider;
- (double)sliderValue;
- (void)sliderValueChanged:(id)arg1;
- (double)stepValue;

@end
