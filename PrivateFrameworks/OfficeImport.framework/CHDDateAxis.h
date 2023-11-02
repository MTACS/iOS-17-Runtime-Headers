
@interface CHDDateAxis : CHDAxis {
    bool  mAutomatic;
    int  mBaseTimeUnit;
    int  mMajorTimeUnit;
    double  mMajorUnitValue;
    int  mMinorTimeUnit;
    double  mMinorUnitValue;
}

- (int)baseTimeUnit;
- (id)initWithResources:(id)arg1;
- (bool)isAutomatic;
- (bool)isDate;
- (int)majorTimeUnit;
- (double)majorUnitValue;
- (int)minorTimeUnit;
- (double)minorUnitValue;
- (void)setAutomatic:(bool)arg1;
- (void)setBaseTimeUnit:(int)arg1;
- (void)setMajorTimeUnit:(int)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (void)setMinorTimeUnit:(int)arg1;
- (void)setMinorUnitValue:(double)arg1;

@end
