
@interface CoreCDPUI.AdvancedDataProtectionViewModel : CoreCDPUI.AdvancedDataProtectionViewModelInterface <CDPUIAdvancedDataProtectionStateManager> {
    void delegate;
}

- (void).cxx_destruct;
- (void)setNetworkError;
- (void)setRepairError;
- (void)setRepaired;
- (void)setUnavailable;
- (void)setUnknown;
- (void)startSpinner;
- (void)stopSpinner;

@end
