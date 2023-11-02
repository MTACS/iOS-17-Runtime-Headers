
@interface NPKPaymentProvisioningFlowStepContext : NSObject <NSSecureCoding> {
    bool  _allowsAddLater;
    NSString * _backStepIdentifier;
    NPKPaymentProvisioningFlowControllerRequestContext * _requestContext;
    NSString * _stepIdentifier;
}

@property (nonatomic) bool allowsAddLater;
@property (nonatomic, retain) NSString *backStepIdentifier;
@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext;
@property (nonatomic, retain) NSString *stepIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_baseFlowStepDescription;
- (bool)allowsAddLater;
- (id)appleBalanceAccountDetailsStepContext;
- (id)backStepIdentifier;
- (id)chooseCredentialsStepContext;
- (id)chooseEMoneyProductStepContext;
- (id)chooseFlowStepContext;
- (id)chooseProductStepContext;
- (id)chooseTransitProductStepContext;
- (id)digitalIssuanceAmountStepContext;
- (id)digitalIssuancePaymentStepContext;
- (void)encodeWithCoder:(id)arg1;
- (id)getIssuerApplicationAddRequestStepContext;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)localDeviceManualEntryProgressStepContext;
- (id)localDeviceManualEntryStepContext;
- (id)manualEntryStepContext;
- (id)moreInformationStepContext;
- (id)passcodeUpgradeStepContext;
- (id)preconditionsStepContext;
- (id)productDisambiguationStepContext;
- (id)provisioningProgressStepContext;
- (id)provisioningResultStepContext;
- (id)readerModeEntryStepContext;
- (id)readerModeIngestionStepContext;
- (id)requestContext;
- (id)secondaryManualEntryStepContext;
- (void)setAllowsAddLater:(bool)arg1;
- (void)setBackStepIdentifier:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;
- (id)termsAndConditionsStepContext;
- (id)verificationChannelsStepContext;
- (id)verificationCodeStepContext;
- (id)verificationFieldsStepContext;
- (id)welcomeStepContext;

@end
