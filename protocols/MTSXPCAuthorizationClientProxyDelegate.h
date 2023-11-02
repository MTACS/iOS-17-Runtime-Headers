
@protocol MTSXPCAuthorizationClientProxyDelegate

@required

- (void)clientProxy:(void *)arg1 checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MTSXPCClientProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showRestrictedCharacteristicsAccessWarningAlertWithClientProxy:(MTSXPCClientProxy *)arg1;

@end
