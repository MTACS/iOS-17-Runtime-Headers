
@protocol AAUISignInOperationDelegate <NSObject>

@required

- (void)signInOperationManager:(AAUISignInOperationManager *)arg1 didSaveAccount:(ACAccount *)arg2 error:(NSError *)arg3;

@end
