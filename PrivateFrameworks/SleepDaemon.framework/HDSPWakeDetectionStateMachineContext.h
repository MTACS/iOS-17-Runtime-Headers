
@interface HDSPWakeDetectionStateMachineContext : HKSPStateMachineContext {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)contextWithType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)type;

@end
