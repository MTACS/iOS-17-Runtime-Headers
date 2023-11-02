
@interface _HKAppURLSpecification : NSObject

+ (bool)isAtrialFibrillationEventURL:(id)arg1;
+ (bool)isClinicalLoginRedirectURL:(id)arg1;
+ (bool)isClinicalOnboardingURL:(id)arg1;
+ (bool)isHealthRecordsProviderSearchURL:(id)arg1;
+ (bool)isViewHealthRecordsURL:(id)arg1;
+ (bool)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
+ (bool)parseClinicalOnboardingURL:(id)arg1 resultHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;

@end
