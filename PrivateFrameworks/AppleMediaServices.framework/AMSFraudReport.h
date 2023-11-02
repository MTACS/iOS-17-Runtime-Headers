
@interface AMSFraudReport : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_containsCallbackFraudReportHeaders:(id)arg1;
+ (bool)_containsFraudReportHeaders:(id)arg1;
+ (id)_determineFallbackAccountForProvidedAccount:(id)arg1;
+ (id)_handleCallbackFraudReportResponse:(id)arg1 account:(id)arg2 bag:(id)arg3;
+ (id)_handleFraudReportResponse:(id)arg1 account:(id)arg2 bag:(id)arg3;
+ (bool)_isCallbackFraudReportStatusCode:(long long)arg1;
+ (bool)_isFraudReportStatusCode:(long long)arg1;
+ (void)_performCallbackWithURL:(id)arg1 headers:(id)arg2 bag:(id)arg3;
+ (id)_signatureForRequest:(id)arg1 signingKeyRef:(struct __SecKey { }*)arg2;
+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)arg1 parameters:(id)arg2 bag:(id)arg3;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)handleResponse:(id)arg1 account:(id)arg2 bag:(id)arg3;
+ (bool)isFeatureSupportedForBag:(id)arg1;

@end
