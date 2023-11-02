
@interface MTROnboardingPayloadParser : NSObject

+ (bool)isQRCode:(id)arg1;
+ (id)setupPayloadForManualCodeOnboardingPayload:(id)arg1 error:(id*)arg2;
+ (id)setupPayloadForOnboardingPayload:(id)arg1 error:(id*)arg2;
+ (id)setupPayloadForQRCodeOnboardingPayload:(id)arg1 error:(id*)arg2;

@end
