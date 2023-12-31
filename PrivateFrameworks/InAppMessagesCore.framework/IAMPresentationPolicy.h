
@interface IAMPresentationPolicy : NSObject {
    double  _minimumIntervalBetweenPresentations;
    long long  _policyGroup;
}

@property (nonatomic, readonly) double minimumIntervalBetweenPresentations;
@property (nonatomic, readonly) long long policyGroup;

+ (long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg1;

- (id)initWithMinimumIntervalBetweenPresentations:(double)arg1 forPresentationPolicyGroup:(long long)arg2;
- (double)minimumIntervalBetweenPresentations;
- (long long)policyGroup;

@end
