
@interface MSOnboardingUtil : NSObject

+ (void)markAsShown;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(id /* block */)arg3;
+ (bool)shouldShowOnboarding;
+ (id)viewControllerForMediaType:(long long)arg1 completion:(id /* block */)arg2;

@end
