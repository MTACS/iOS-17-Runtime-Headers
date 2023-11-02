
@interface PassKitCore.ProvisioningStepLostMode : NSObject {
    void completion;
    void context;
    void credential;
    void hasRequestUserExitLostMode;
    void secureElement;
    void sharedState;
    void timeout;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
