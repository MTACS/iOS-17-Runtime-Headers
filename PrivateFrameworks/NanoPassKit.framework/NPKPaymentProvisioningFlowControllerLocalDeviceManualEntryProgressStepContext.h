
@interface NPKPaymentProvisioningFlowControllerLocalDeviceManualEntryProgressStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _numericEntryPending;
}

@property (nonatomic) bool numericEntryPending;

- (id)initWithRequestContext:(id)arg1;
- (bool)numericEntryPending;
- (void)setNumericEntryPending:(bool)arg1;

@end
