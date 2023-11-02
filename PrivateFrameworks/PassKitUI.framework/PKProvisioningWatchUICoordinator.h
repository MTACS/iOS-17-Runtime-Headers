
@interface PKProvisioningWatchUICoordinator : NSObject {
    _PKProvisioningWatchUICoordinator * _coordinator;
}

@property (nonatomic) <PKProvisioningWatchUICoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_initWithCoordinator:(id)arg1;
- (void)cancel;
- (void)continueWithFieldsModel:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initManualEntryCoordinatorWithSetupContext:(long long)arg1 provisioningController:(id)arg2 skipRequirements:(bool)arg3;
- (id)initWithSetupContext:(long long)arg1 provisioningController:(id)arg2 credential:(id)arg3;
- (void)preflightWithFieldsModel:(id)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
