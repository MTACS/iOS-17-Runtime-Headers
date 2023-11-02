
@interface RBAssertionTransientState : NSObject <NSCopying> {
    NSMutableDictionary * _cpuUsageViolationPoliciesByRole;
    NSMutableSet * _tags;
}

@property (nonatomic, readonly) NSSet *tags;

- (void).cxx_destruct;
- (void)addTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2;
- (id)tags;
- (void)unionState:(id)arg1;

@end
