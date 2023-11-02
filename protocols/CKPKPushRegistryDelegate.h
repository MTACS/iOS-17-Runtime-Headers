
@protocol CKPKPushRegistryDelegate <NSObject>

@required

- (void)didReceiveIncomingPushWithPayload:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: PKPushPayload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
