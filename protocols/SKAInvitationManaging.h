
@protocol SKAInvitationManaging <NSObject>

@required

- (<SKAInvitationManagingDelegate> *)delegate;
- (void)fetchHandleInvitability:(void *)arg1 fromHandle:(void *)arg2 forPresenceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKHandleInvitability *, NSError *, void*
- (void)fetchHandleInvitability:(void *)arg1 fromHandle:(void *)arg2 forStatusTypeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SKHandle *, SKHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKHandleInvitability *, NSError *, void*
- (void)handleIncomingInvitationMessage:(NSDictionary *)arg1 fromHandle:(SKHandle *)arg2 fromID:(NSString *)arg3 toHandle:(SKHandle *)arg4 messageGuid:(NSString *)arg5;
- (void)isHandleInviteable:(void *)arg1 fromHandle:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SKHandle *, SKHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)outgoingMessageWithIdentifier:(NSString *)arg1 fromHandle:(SKHandle *)arg2 toHandle:(SKHandle *)arg3 didSendWithSuccess:(bool)arg4;
- (SKHandle *)resolveSenderHandleWithPreferredSenderHandle:(SKHandle *)arg1;
- (void)revokeAllInvitationsFromPersonalChannelWithStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)revokeInvitationFromPersonalChannelWithStatusTypeIdentifier:(void *)arg1 forHandles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)revokeInvitationFromPresenceChannelWithPresenceIdentifier:(void *)arg1 forHandles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rollEncryptionKeyForPersonalChannelWithStatusTypeIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)rollPersonalChannelWithStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)rollPresenceChannelWithPresenceIdentifier:(void *)arg1 isPersonal:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)sendInvitationForPersonalChannelWithStatusTypeIdentifier:(void *)arg1 toHandles:(void *)arg2 fromSenderHandle:(void *)arg3 withInvitationPayload:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSArray *, SKHandle *, SKInvitationPayload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendInvitationForPresenceChannelWithPresenceIdentifier:(void *)arg1 toHandles:(void *)arg2 fromSenderHandle:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSArray *, SKHandle *, SKPresenceOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendSelfInvitationForPresenceChannelWithPresenceIdentifier:(void *)arg1 isPersonal:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <SKAInvitationManagingDelegate>)arg1;

@end
