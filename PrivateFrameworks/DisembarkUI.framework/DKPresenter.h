
@interface DKPresenter : NSObject

+ (void)presentInSettings;
+ (void)presentUsingParentViewController:(id)arg1;
+ (void)presentUsingParentViewController:(id)arg1 completion:(id /* block */)arg2;
+ (void)presentUsingParentViewController:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
+ (void)presentUsingParentViewController:(id)arg1 configuration:(id)arg2 willPresent:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
