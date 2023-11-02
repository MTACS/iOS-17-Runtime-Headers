
@interface REDuetEvent : NSObject {
    double  _confidence;
    NSDateInterval * _interval;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) REFeatureValue *value;

+ (id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned long long)hash;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
