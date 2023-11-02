
@interface PassKitUI.ProvisioningPasscodeUpgradeFlowItem : NSObject <PKPasscodeUpgradeFlowRenderer> {
    void context;
    void delegate;
    void dismissalConfiguration;
    void feature;
    void identifier;
    void isRequirementOptional;
    void passcodeController;
    void requirements;
}

- (void).cxx_destruct;
- (id)init;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)topViewController;

@end
