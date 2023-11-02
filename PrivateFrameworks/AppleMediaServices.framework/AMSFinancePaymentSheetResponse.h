
@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable> {
    AMSFinanceAuthenticateResponse * _authenticateResponse;
    NSDictionary * _metricsDictionary;
    AMSPaymentSheetRequest * _paymentSheetRequest;
}

@property (nonatomic, readonly) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metricsDictionary;
@property (nonatomic, readonly) AMSPaymentSheetRequest *paymentSheetRequest;
@property (readonly) Class superclass;

+ (id)_attributedListDictionaryForValues:(id)arg1 account:(id)arg2;
+ (id)_attributedStringForAttributedArray:(id)arg1 account:(id)arg2;
+ (id)_attributedStringForAttributedDictionary:(id)arg1 account:(id)arg2;
+ (id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(bool)arg3;
+ (id)_attributedStringForSalableInfoStyledStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(bool)arg3;
+ (id)_attributedStringForStringArray:(id)arg1 useGrey:(bool)arg2 account:(id)arg3 shouldUppercase:(bool)arg4;
+ (long long)_confirmationTitleForString:(id)arg1;
+ (id)_createMerchantSessionFromDictionary:(id)arg1;
+ (id)_flexListDictionaryForValues:(id)arg1 styles:(id)arg2 account:(id)arg3 shouldUppercaseText:(bool)arg4 designVersion:(id)arg5;
+ (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)arg1;
+ (long long)_salableIconForString:(id)arg1;
+ (id)_salableInfoDictionaryForValues:(id)arg1 styles:(id)arg2 account:(id)arg3 shouldUppercaseText:(bool)arg4 designVersion:(id)arg5;
+ (id)_salableInfoForKey:(id)arg1 inDictionary:(id)arg2 shouldUppercase:(bool)arg3;
+ (id)_styleDictionaryWithName:(id)arg1 styles:(id)arg2;
+ (id)attributedStringWithString:(id)arg1 styles:(id)arg2;
+ (id)createRequestFromDictionary:(id)arg1 confirmationOnly:(bool)arg2 delegateAuthenticationRequired:(bool)arg3 biometricSignatureRequired:(bool)arg4 authenticateResponse:(id)arg5 taskInfo:(id)arg6 account:(id)arg7;
+ (id)fallbackTitleFromResponse:(id)arg1;

- (void).cxx_destruct;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1;
- (id)_performAuthorizationDialogProxyWithTaskInfo:(id)arg1;
- (id)authenticateResponse;
- (id)initWithResponseDictionary:(id)arg1 confirmationOnly:(bool)arg2 delegateAuthenticationRequired:(bool)arg3 biometricSignatureRequired:(bool)arg4 taskInfo:(id)arg5;
- (id)metricsDictionary;
- (id)paymentSheetRequest;
- (id)performWithTaskInfo:(id)arg1;

@end
