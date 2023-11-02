
@protocol CPActivitySessionXPCHost

@required

- (void)associateSceneWithSceneID:(NSString *)arg1;
- (void)disassociateScene;
- (void)end;
- (void)joinWithAudioSessionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPDataCryptor> *, NSError *, void*
- (void)leaveWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logAttachmentEventWithReport:(_TtC14CopresenceCore20AttachmentDataReport *)arg1 reportEvent:(NSString *)arg2;
- (void)postEventWithEvent:(CPActivitySessionEvent *)arg1;
- (void)presentSessionDismissalAlertWithAllowingCancellation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestEncryptionKeysFor:(NSArray *)arg1;
- (void)requestEndpointWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)requestForegroundPresentation;
- (void)requestParticipantsFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)sendResourceAtURL:(void *)arg1 to:(void *)arg2 metadata:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: TUSandboxExtendedURL *, NSSet *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateActivityWithActivity:(TUConversationActivity *)arg1;
- (void)updateCapabilitiesWithCapabilities:(long long)arg1;

@end
