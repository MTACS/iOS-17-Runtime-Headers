
@interface PassKitUI.ProvisioningMultiCredentialFlowSection : NSObject {
    void _hasRemainingCredentialsToProvision;
    void _isCardsOnFileProvisioning;
    void allowManualEntry;
    void backgroundPendingProvisionings;
    void blockingFlowItem;
    void context;
    void credentials;
    void delegate;
    void foregroundCredentialsToProvision;
    void identifier;
    void isPreflightingBackgroundPendingProvisioningsInProcess;
    void product;
}

- (void).cxx_destruct;
- (id)init;

@end
