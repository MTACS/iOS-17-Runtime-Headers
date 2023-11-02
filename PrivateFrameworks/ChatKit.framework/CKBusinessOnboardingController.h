
@interface CKBusinessOnboardingController : OBWelcomeController {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)shouldShowBusinessOnboarding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)continueButtonTapped:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
