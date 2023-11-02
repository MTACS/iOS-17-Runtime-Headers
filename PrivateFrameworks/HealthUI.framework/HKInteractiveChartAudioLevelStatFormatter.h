
@interface HKInteractiveChartAudioLevelStatFormatter : HKInteractiveChartGenericStatFormatter {
    bool  _showsClassificationInCurrentValueView;
}

@property (nonatomic) bool showsClassificationInCurrentValueView;

- (id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1;
- (id)_formatDuration:(double)arg1;
- (id)_formatQuantityAudioData:(id)arg1;
- (id)_formattedCurrentValueForChartData:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3;
- (id)_majorAttributes;
- (id)_minorAttributes;
- (long long)_numberOfDaysVisibleInRange:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)setShowsClassificationInCurrentValueView:(bool)arg1;
- (bool)showsClassificationInCurrentValueView;

@end
