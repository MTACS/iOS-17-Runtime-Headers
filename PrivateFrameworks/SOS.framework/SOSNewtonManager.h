
@interface SOSNewtonManager : NSObject

+ (void)checkEligibilityForAutoEnableWithCompletion:(id /* block */)arg1;
+ (void)checkEligibilityForAutoEnableWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
+ (void)newtonEligibilityWithCompletion:(id /* block */)arg1;
+ (void)newtonEligibilityWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
+ (void)newtonEligibilityWithHealthStore:(id)arg1 deviceSupportsWorkoutsOnly:(bool)arg2 completion:(id /* block */)arg3;

@end
