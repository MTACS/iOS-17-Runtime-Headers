
@interface HMISystemResourceUsage : HMFObject {
    long long  _systemResourceUsageLevel;
}

@property (nonatomic) long long systemResourceUsageLevel;

- (id)init;
- (void)setSystemResourceUsageLevel:(long long)arg1;
- (long long)systemResourceUsageLevel;

@end
