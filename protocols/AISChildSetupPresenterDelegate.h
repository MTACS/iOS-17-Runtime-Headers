
@protocol AISChildSetupPresenterDelegate

@required

- (void)childSetupPresenter:(AISChildSetupPresenter *)arg1 didCompleteWithResult:(AISChildSetupFlowResult *)arg2;
- (void)childSetupPresenter:(AISChildSetupPresenter *)arg1 didFail:(NSError *)arg2;
- (void)setupLocationServicesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setupPasscodeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setupPerformAIDASignInWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
