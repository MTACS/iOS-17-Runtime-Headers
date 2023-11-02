
@protocol KCSharingMessagingdXPCServerProtocol <NSObject>

@required

- (void)cancelPendingInvitesForGroup:(void *)arg1 participantHandles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: KCSharingGroup *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didAcceptInviteForGroupID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didDeclineInviteForGroupID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchReceivedInviteWithGroupID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, KCSharingGroupInvite *, NSError *, void*
- (void)fetchReceivedInvitesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)sendNewInvitesForGroup:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: KCSharingGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
