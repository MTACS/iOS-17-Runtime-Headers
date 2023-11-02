
@interface HMMTRSoftwareUpdateProviderApplyUpdateResponseParams : NSObject {
    NSNumber * _action;
    NSNumber * _delayedActionTime;
}

@property (readonly) NSNumber *action;
@property (readonly) NSNumber *delayedActionTime;

- (void).cxx_destruct;
- (id)action;
- (id)delayedActionTime;
- (id)initWithAction:(id)arg1 delayedActionTime:(id)arg2;

@end
