
@interface CHDValueAxis : CHDAxis {
    bool  mAutoMajorUnitValue;
    bool  mAutoMinorUnitValue;
    int  mBuiltInUnit;
    double  mMajorUnitValue;
    double  mMinorUnitValue;
    bool  mPercentageFormattingFlag;
    double  mScalingLogBase;
    bool  mShowBuiltInUnit;
}

- (void)adjustAxisPositionForHorizontalChart;
- (int)builtInUnit;
- (id)contentFormatWithBuiltInUnit;
- (id)initWithResources:(id)arg1;
- (bool)isAutoMajorUnitValue;
- (bool)isAutoMinorUnitValue;
- (bool)isPercentageFormattingFlag;
- (bool)isShowBuiltInUnit;
- (double)majorUnitValue;
- (double)minorUnitValue;
- (double)scalingLogBase;
- (void)setBuiltInUnit:(int)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (void)setPercentageFormattingFlag:(bool)arg1;
- (void)setScalingLogBase:(double)arg1;
- (void)setShowBuiltInUnitFlag:(bool)arg1;

@end
