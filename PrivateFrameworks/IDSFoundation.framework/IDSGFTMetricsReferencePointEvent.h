
@interface IDSGFTMetricsReferencePointEvent : NSObject {
    NSNumber * _reason;
    NSNumber * _time;
}

@property (copy) NSNumber *reason;
@property (copy) NSNumber *time;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(id)arg1 reason:(id)arg2;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
