
@interface DKEraseConfirmationAlertController : UIAlertController

+ (id)alertControllerWithCellularPlans:(id)arg1 completion:(id /* block */)arg2;
+ (id)alertControllerWithCompletion:(id /* block */)arg1;

- (bool)_canShowWhileLocked;

@end
