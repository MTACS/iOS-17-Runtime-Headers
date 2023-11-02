
@protocol RUIServerHookHandlerDelegate <NSObject>

@required

- (bool)serverHookHandler:(RUIServerHookHandler *)arg1 isUserCancelError:(NSError *)arg2;

@end
