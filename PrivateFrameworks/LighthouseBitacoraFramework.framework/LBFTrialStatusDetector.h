
@interface LBFTrialStatusDetector : NSObject {
    NSDictionary * _observedTrialStatusHolder;
}

@property (nonatomic, readonly) NSDictionary *observedTrialStatusHolder;

- (void).cxx_destruct;
- (id)getTrialStatus:(id)arg1 deploymentId:(id)arg2;
- (id)init;
- (id)observedTrialStatusHolder;

@end
