
@interface HKInteractiveChartDataFormatter : NSObject {
    HKDisplayType * _displayType;
    UIFont * _majorFont;
    UIFont * _minorFont;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic) HKDisplayType *displayType;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_formattedPercentageStringWithValue:(double)arg1 unitString:(id)arg2 showUnit:(bool)arg3;
- (id)attributedStringForValue:(id)arg1;
- (id)attributedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3;
- (id)displayType;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)formattedStringWithValue:(double)arg1 unitString:(id)arg2 showUnit:(bool)arg3;
- (id)majorFont;
- (id)minorFont;
- (void)setDisplayType:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)unitController;
- (id)unitStringFromUnit:(id)arg1 number:(id)arg2;
- (id)valueStringFromNumber:(id)arg1;

@end
