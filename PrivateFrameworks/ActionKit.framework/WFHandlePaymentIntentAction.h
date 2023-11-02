
@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {
    WFImage * _icon;
}

- (void).cxx_destruct;
- (id)actionForAppIdentifier:(id)arg1;
- (id)amountAboveMaximumErrorWithAmount:(id)arg1 sending:(bool)arg2;
- (id)amountBelowMinimumErrorWithAmount:(id)arg1 sending:(bool)arg2;
- (id)credentialsUnverifiedError;
- (id)currencyUnsupportedErrorWithAmount:(id)arg1;
- (id)customAppNameForBundleIdentifier:(id)arg1;
- (id)customImageForBundleIdentifier:(id)arg1;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromPaymentsResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)icon;
- (id)insufficientFundsError;
- (id)localizedKeyParameterDisplayName;
- (id)minimumSupportedClientVersion;
- (id)noBankAccountError;
- (id)noRecipientAccountError:(bool)arg1;
- (bool)opensInApp;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (bool)selectedPaymentServiceIsApplePay;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (id)showsWhenRunIfApplicable;

@end
