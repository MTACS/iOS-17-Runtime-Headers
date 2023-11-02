
@interface SBSSystemApertureRestrictionService : NSObject <BSInvalidatable> {
    <BSInvalidatable> * _completeSuppressionAssertion;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    bool  _isValid;
    <BSInvalidatable> * _restrictToInertAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionWithReason:(id)arg1;
- (id)acquireSystemApertureCompleteSuppressionAssertionWithReason:(id)arg1;
- (id)init;
- (void)invalidate;

@end
