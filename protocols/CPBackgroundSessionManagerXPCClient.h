
@protocol CPBackgroundSessionManagerXPCClient

@required

- (void)beginWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CPBackgroundSessionCreationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createPresenceSessionWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CPPresenceSessionCreationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC14CopresenceCore29PresenceSessionConnectionInfo *, NSError *, void*
- (void)leaveWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateMembersWithIdentifier:(void *)arg1 members:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateShare:(void *)arg1 activityID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CKShare *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
