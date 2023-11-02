
@protocol PASUIDependentViewPresenterDelegate <NSObject>

@required

- (void)proximitySetupCompletedWithResult:(PASFlowResult *)arg1;
- (void)proximitySetupSelectedAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)proximitySetupSelectedAccountType:(long long)arg1;
- (void)setupPasscodeAndBiometricWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setupPerformAIDASignInWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end