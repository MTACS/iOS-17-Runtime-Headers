
@protocol CNFRegCreateAccountControllerDelegate <NSObject>

@required

- (void)createAccountControllerDidFinish:(CNFRegCreateAccountController *)arg1 withAppleId:(NSString *)arg2 authID:(NSString *)arg3 authToken:(NSString *)arg4;

@end
