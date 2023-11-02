
@interface PKProvisioningBackgroundCoordinator : NSObject {
    _PKProvisioningBackgroundCoordinator * _coordinator;
}

- (void).cxx_destruct;
- (id)archivedState;
- (void)cancel;
- (id)init;
- (id)initWithSetupContext:(id)arg1 credential:(id)arg2 previouslyAcceptedTerms:(bool)arg3;
- (void)startWithCompletion:(id /* block */)arg1;

@end
