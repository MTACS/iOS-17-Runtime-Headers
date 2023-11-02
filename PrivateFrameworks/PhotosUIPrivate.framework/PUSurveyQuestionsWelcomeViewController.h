
@interface PUSurveyQuestionsWelcomeViewController : OBWelcomeController <PUWelcomeProtocol> {
    id /* block */  __completionHandler;
}

@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)resetLastPresentationInfo;

- (void).cxx_destruct;
- (id /* block */)_completionHandler;
- (void)_handleContinueButton:(id)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithCompletionHandler:(id /* block */)arg1;

@end
