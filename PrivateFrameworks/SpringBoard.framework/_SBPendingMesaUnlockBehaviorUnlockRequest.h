
@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject {
    <SBBiometricUnlockBehavior> * _behavior;
    SBAuthenticationFeedback * _feedback;
    id  _request;
}

@property (nonatomic, readonly) <SBBiometricUnlockBehavior> *behavior;
@property (nonatomic, readonly) SBAuthenticationFeedback *feedback;
@property (nonatomic, readonly) id request;

- (void).cxx_destruct;
- (id)behavior;
- (id)feedback;
- (id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3;
- (id)request;

@end
