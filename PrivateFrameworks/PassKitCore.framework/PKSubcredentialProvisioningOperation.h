
@interface PKSubcredentialProvisioningOperation : NSObject {
    bool  _canBeRestarted;
    bool  _canCancelOperation;
    PKSubcredentialProvisioningConfiguration * _configuration;
    PKSubcredentialProvisioningOperationContext * _context;
    <PKSubcredentialProvisioningOperationDelegate> * _delegate;
    bool  _inProgress;
}

@property (nonatomic, readonly) bool canBeRestarted;
@property (nonatomic, readonly) bool canCancelOperation;
@property (nonatomic, readonly) PKSubcredentialProvisioningConfiguration *configuration;
@property (nonatomic, readonly) PKSubcredentialProvisioningOperationContext *context;
@property (nonatomic, readonly) <PKSubcredentialProvisioningOperationDelegate> *delegate;
@property (getter=isInProgress, nonatomic, readonly) bool inProgress;

+ (id)operationForState:(long long)arg1 configuration:(id)arg2 context:(id)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (void)advanceToState:(long long)arg1;
- (bool)canBeRestarted;
- (bool)canCancelOperation;
- (void)cancelOperation;
- (id)configuration;
- (id)context;
- (id)delegate;
- (void)failWithError:(id)arg1;
- (void)failWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)failWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (bool)isInProgress;
- (void)performOperation;

@end
