
@protocol SLDCollaborationHandshakeService

@required

- (NSProgress *)addParticipantHandles:(void *)arg1 withFileURL:(void *)arg2 sandboxTokenData:(void *)arg3 metadata:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSSet *, NSURL *, NSData *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)addParticipantHandles:(void *)arg1 withMetadata:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSSet *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)generateProofForIdentity:(void *)arg1 collaborationIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: _SWPersonIdentity *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _SWPersonIdentityProof *, NSError *, void*
- (void)prepareConnectionWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSProgress *)removeParticipantIdentities:(void *)arg1 withFileURL:(void *)arg2 sandboxTokenData:(void *)arg3 metadata:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSSet *, NSURL *, NSData *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)removeParticipantIdentities:(void *)arg1 withMetadata:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSSet *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)startCollaborationWithFileURL:(void *)arg1 sandboxTokenData:(void *)arg2 metadata:(void *)arg3 participants:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 12: NSURL *, NSData *, _SWCollaborationMetadata *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)startCollaborationWithMetadata:(void *)arg1 participants:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: _SWCollaborationMetadata *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, _SWCollaborationMetadata *, NSError *, void*
- (NSProgress *)verifySourceBundleIdentifierFromMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
