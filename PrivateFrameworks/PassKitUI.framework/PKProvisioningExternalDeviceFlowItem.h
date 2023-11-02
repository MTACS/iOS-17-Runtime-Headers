
@interface PKProvisioningExternalDeviceFlowItem : NSObject {
    void _isCardsOnFileProvisioning;
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)extract;
- (id)init;
- (id)initWithContext:(id)arg1 pass:(id)arg2 externalOptions:(id)arg3 cardIdentifier:(id)arg4;

@end
