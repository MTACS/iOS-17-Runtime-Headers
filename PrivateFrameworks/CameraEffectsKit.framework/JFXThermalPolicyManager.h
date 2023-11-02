
@interface JFXThermalPolicyManager : NSObject {
    JFXThreadSafeArray * _activePolicies;
}

@property (nonatomic, readonly) JFXThreadSafeArray *activePolicies;
@property (nonatomic, readonly) <JFXThermalPolicy> *highestPriorityPolicy;

- (void).cxx_destruct;
- (id)activePolicies;
- (id)description;
- (id)highestPriorityPolicy;
- (id)init;
- (id)initWithDefaultPolicy:(id)arg1;
- (void)setPolicyType:(Class)arg1 active:(bool)arg2;

@end
