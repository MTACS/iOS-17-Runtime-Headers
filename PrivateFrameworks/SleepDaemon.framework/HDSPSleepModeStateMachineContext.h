
@interface HDSPSleepModeStateMachineContext : HKSPStateMachineContext {
    unsigned long long  _reason;
}

@property (nonatomic, readonly) unsigned long long reason;

+ (id)contextWithReason:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)reason;

@end
