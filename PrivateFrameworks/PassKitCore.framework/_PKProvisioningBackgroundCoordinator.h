
@interface _PKProvisioningBackgroundCoordinator : NSObject {
    void completion;
    void composer;
    void configuration;
    void context;
    void didUpgradeToStrongPasscode;
    void fieldsModel;
    void preflightCompletion;
    void previouslyAcceptedTerms;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)archivedState;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithPkContext:(id)arg1 credential:(id)arg2 previouslyAcceptedTerms:(bool)arg3;
- (void)startWithCompletion:(id /* block */)arg1;

@end
