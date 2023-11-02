
@protocol MRGroupSession <NSObject>

@required

- (void)approvePendingParticipant:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <MRGroupSessionParticipant> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (MRGroupSessionAssertion *)assertSessionManagementScreenVisible;
- (<MRGroupSessionDelegate> *)delegate;
- (void)denyPendingParticipant:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <MRGroupSessionParticipant> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<MRGroupSessionParticipant> *)host;
- (NSString *)identifier;
- (bool)isLocalSession;
- (MRGroupSessionToken *)joinToken;
- (NSString *)localizedSessionName;
- (MRUserIdentity *)memberForIdentifier:(NSString *)arg1;
- (NSSet *)members;
- (<MRGroupSessionParticipant> *)participantForIdentifier:(NSString *)arg1;
- (NSSet *)participants;
- (<MRGroupSessionParticipant> *)pendingParticipantForIdentifier:(NSString *)arg1;
- (NSSet *)pendingParticipants;
- (void)removeAllParticipantsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeParticipant:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <MRGroupSessionParticipant> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (unsigned char)routeType;
- (long long)state;
- (NSData *)synchronizedMetadata;

@end
