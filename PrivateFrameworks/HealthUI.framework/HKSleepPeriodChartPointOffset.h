
@interface HKSleepPeriodChartPointOffset : NSObject {
    bool  _continuation;
    NSNumber * _value;
}

@property (nonatomic, readonly) bool continuation;
@property (nonatomic, readonly) NSNumber *value;

+ (id)chartPointOffsetWithValue:(id)arg1 continuation:(bool)arg2;

- (void).cxx_destruct;
- (bool)continuation;
- (id)initWithValue:(id)arg1 continuation:(bool)arg2;
- (id)value;

@end
