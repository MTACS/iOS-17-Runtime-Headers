
@interface HMMTRMetricBundle : NSObject {
    NSString * _name;
    NSDate * _time;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (double)durationWithDate:(id)arg1;
- (id)initWithTime:(id)arg1 name:(id)arg2;
- (id)name;
- (id)time;

@end
