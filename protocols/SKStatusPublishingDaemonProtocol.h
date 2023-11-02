
@protocol SKStatusPublishingDaemonProtocol <NSObject>

@required

- (void)fetchHandleInvitability:(void *)arg1 fromHandle:(void *)arg2 forStatusTypeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKHandleInvitability *, NSError *, void*
- (void)inviteHandles:(void *)arg1 fromSenderHandle:(void *)arg2 withInvitationPayload:(void *)arg3 statusTypeIdentifier:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, SKHandle *, SKInvitationPayload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invitedHandlesForStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)isHandleInviteable:(void *)arg1 fromHandle:(void *)arg2 forStatusTypeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isHandleInvited:(void *)arg1 fromSenderHandle:(void *)arg2 forStatusTypeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)publishStatusRequest:(void *)arg1 statusTypeIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SKStatusPublishRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllInvitedHandlesFromPersonalChannelWithStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInvitedHandles:(void *)arg1 statusTypeIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
