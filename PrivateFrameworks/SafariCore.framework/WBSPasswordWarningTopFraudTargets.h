
@interface WBSPasswordWarningTopFraudTargets : NSObject {
    NSArray * _financialFraudTargets;
    NSArray * _fraudTargets;
    NSArray * _highPriorityFraudTargets;
}

@property (nonatomic, readonly) NSArray *financialFraudTargets;
@property (nonatomic, readonly) NSArray *fraudTargets;
@property (nonatomic, readonly) NSArray *highPriorityFraudTargets;

- (void).cxx_destruct;
- (id)financialFraudTargets;
- (id)fraudTargets;
- (id)highPriorityFraudTargets;
- (id)initWithHighPriorityTargets:(id)arg1 targets:(id)arg2 financialTargets:(id)arg3;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;

@end
