
@protocol UMUserSwitchManagement_Private <NSObject>

@required

- (void)registerCriticalUserSwitchStakeHolder:(id <UMCriticalUserSwitchStakeholder>)arg1;
- (void)resumeQuotas;
- (void)suspendQuotasWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)switchToUser:(void *)arg1 passcodeData:(void *)arg2 context:(void *)arg3 preferences:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: UMUser *, NSData *, UMUserSwitchContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)userInteractionIsEnabled;

@end
