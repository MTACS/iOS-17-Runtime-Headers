
@interface BCSFlagMeasurement : BCSMeasurement {
    bool  _flag;
    long long  _flagMeasurementType;
    bool  _flagWasSet;
    NSArray * _realTimeMeasurementHandlers;
}

@property (nonatomic) bool flag;
@property (nonatomic, readonly) long long flagMeasurementType;

+ (id)newFlagMeasurement:(long long)arg1 withHandlers:(id)arg2;

- (void).cxx_destruct;
- (bool)flag;
- (long long)flagMeasurementType;
- (void)setFlag:(bool)arg1;

@end
