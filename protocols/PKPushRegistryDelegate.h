
@protocol PKPushRegistryDelegate <NSObject>

@required

- (void)pushRegistry:(PKPushRegistry *)arg1 didUpdatePushCredentials:(PKPushCredentials *)arg2 forType:(NSString *)arg3;

@optional

- (void)pushRegistry:(PKPushRegistry *)arg1 didInvalidatePushTokenForType:(NSString *)arg2;
- (void)pushRegistry:(PKPushRegistry *)arg1 didReceiveIncomingPushWithPayload:(PKPushPayload *)arg2 forType:(NSString *)arg3;
- (void)pushRegistry:(void *)arg1 didReceiveIncomingPushWithPayload:(void *)arg2 forType:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 8: PKPushRegistry *, PKPushPayload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
