
@protocol DKAccountProvider <NSObject>

@required

- (void)cacheLocalDevicePasscode:(NSString *)arg1 passcodeType:(int)arg2;
- (void)fetchAccounts:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (<DKFindMyProvider> *)findMyProvider;
- (void)preparationRequiredForPrimaryAppleAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)preparePrimaryAppleAccountForSignOutWithPresentingViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setFindMyProvider:(id <DKFindMyProvider>)arg1;
- (void)signOutPrimaryAppleAccountWithPresentingViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
