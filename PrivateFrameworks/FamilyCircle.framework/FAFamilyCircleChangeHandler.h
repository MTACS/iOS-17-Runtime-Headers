
@interface FAFamilyCircleChangeHandler : NSObject

+ (void)_refetchFamilyWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)handleDidRepairFamilyWithCompletion:(id /* block */)arg1;
+ (void)handleDidSetupFamilyWithCompletion:(id /* block */)arg1;
+ (void)handleURLResponse:(id)arg1;

@end
