
@interface _PKProvisioningWatchUICoordinator : NSObject {
    void composer;
    void configuration;
    void context;
    void delegate;
    void fieldsModel;
    void provisionedPasses;
    void provisioningError;
    void skipRequirements;
}

@property (nonatomic) <PKProvisioningWatchUICoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)cancel;
- (void)continueWithFieldsModel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithManualEntrySetupContext:(long long)arg1 provisioningController:(id)arg2 skipRequirements:(bool)arg3;
- (id)initWithSetupContext:(long long)arg1 provisioningController:(id)arg2 credential:(id)arg3;
- (void)preflightWithFieldModel:(id)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
