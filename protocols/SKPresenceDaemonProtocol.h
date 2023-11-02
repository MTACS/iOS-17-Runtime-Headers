
@protocol SKPresenceDaemonProtocol <NSObject>

@required

- (void)assertPresenceForIdentifier:(void *)arg1 withPresencePayload:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, SKPresencePayload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchHandleInvitability:(void *)arg1 fromHandle:(void *)arg2 forPresenceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKHandleInvitability *, NSError *, void*
- (void)fetchPresenceCapability:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)inviteHandles:(void *)arg1 fromSenderHandle:(void *)arg2 presenceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invitedHandlesForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)isHandleInvited:(void *)arg1 fromSenderHandle:(void *)arg2 forPresenceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentDevicesForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, SKPresenceOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePresenceForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInvitedHandles:(void *)arg1 presenceIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
