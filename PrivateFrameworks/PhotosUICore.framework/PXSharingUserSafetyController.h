
@interface PXSharingUserSafetyController : NSObject

+ (void)_userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)arg1 completion:(id /* block */)arg2;
+ (id)interventionAlertControllerWithAction:(id /* block */)arg1;
+ (id)interventionViewControllerWithAction:(id /* block */)arg1;
+ (bool)userSafetyInterventionCheckRequired;
+ (void)userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)arg1 completion:(id /* block */)arg2;

@end
