
@interface CWFAutoJoinThrottle : NSObject <NSCopying> {
    NSDictionary * _intervals;
    NSDictionary * _intervalsBasedOnTriggerTimestamp;
    long long  _trigger;
}

@property (nonatomic, retain) NSDictionary *intervals;
@property (nonatomic, retain) NSDictionary *intervalsBasedOnTriggerTimestamp;
@property (nonatomic) long long trigger;

+ (id)autoJoinThrottleWithTrigger:(long long)arg1 intervals:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)intervals;
- (id)intervalsBasedOnTriggerTimestamp;
- (void)setIntervals:(id)arg1;
- (void)setIntervalsBasedOnTriggerTimestamp:(id)arg1;
- (void)setTrigger:(long long)arg1;
- (long long)trigger;

@end
