
@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    bool  _operationWasCancelled;
}

- (id)_manufacturerIdentifier;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
- (bool)canCancelOperation;
- (void)cancelOperation;
- (void)performOperation;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)startPrewarming;

@end
