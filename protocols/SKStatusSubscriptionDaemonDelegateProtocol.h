
@protocol SKStatusSubscriptionDaemonDelegateProtocol <NSObject>

@required

- (void)subscriptionInvitationReceived:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SKStatusSubscriptionMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)subscriptionReceivedStatusUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SKStatusSubscriptionMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)subscriptionStateChangedForSubscriptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
