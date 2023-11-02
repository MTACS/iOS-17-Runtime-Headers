
@interface HDSPTimeAsleepTrackerStateMachineContext : HKSPStateMachineContext {
    unsigned long long  _endReason;
    unsigned long long  _startReason;
}

@property (nonatomic, readonly) unsigned long long endReason;
@property (nonatomic, readonly) unsigned long long startReason;

+ (id)contextWithEndReason:(unsigned long long)arg1;
+ (id)contextWithStartReason:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)endReason;
- (unsigned long long)startReason;

@end
