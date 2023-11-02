
@protocol SFAutoFillHelperProtocol <NSObject>

@required

- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(void *)arg1 confirmPasswordRules:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(void *)arg1 confirmPasswordRules:(void *)arg2 overrideApplicationIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
