
@protocol CNFRegChangeAccountPasswordDelegate <NSObject>

@required

- (void)changePasswordControllerDidCancel:(CNFRegChangeAccountPasswordController *)arg1;
- (void)changePasswordControllerDidFinish:(CNFRegChangeAccountPasswordController *)arg1 withAppleID:(NSString *)arg2 authID:(NSString *)arg3 authToken:(NSString *)arg4;

@end
