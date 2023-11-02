
@interface PKPaymentTransactionPresentation : NSObject

+ (id)_billPaymentFundingSourceForTransaction:(id)arg1;
+ (id)_relativeDateForTransaction:(id)arg1;
+ (id)_statusAnnotationForTransaction:(id)arg1 overloadAnnotation:(bool*)arg2;
+ (void)_transferFundingSourceInformationForTransaction:(id)arg1 primaryString:(id*)arg2 secondaryString:(id*)arg3;
+ (unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(bool)arg2;
+ (id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 familyMember:(id)arg4 account:(id)arg5 deviceName:(id)arg6 context:(unsigned long long)arg7;
+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(bool)arg3 useGenericNameIfNoDescriptionAvailable:(bool)arg4;
+ (id)staticIconNameForTransaction:(id)arg1;
+ (bool)transactionIsPaymentForPayLaterFinancingPlan:(id)arg1;

@end
