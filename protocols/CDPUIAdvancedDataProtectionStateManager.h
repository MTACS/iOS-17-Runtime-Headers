
@protocol CDPUIAdvancedDataProtectionStateManager <NSObject>

@required

- (void)setNetworkError;
- (void)setRepairError;
- (void)setRepaired;
- (void)setUnavailable;
- (void)setUnknown;
- (void)startSpinner;
- (void)stopSpinner;

@end
