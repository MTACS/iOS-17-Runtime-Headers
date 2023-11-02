
@interface PBServerConnection : NSObject {
    NSXPCConnection * _memberQ_serverConnection;
    NSObject<OS_dispatch_queue> * _memberQueue;
}

@property (nonatomic, retain) NSXPCConnection *memberQ_serverConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, readonly) NSXPCConnection *serverConnection;

+ (unsigned long long)beginListeningToPasteboardChangeNotifications;
+ (id)defaultConnection;
+ (void)simulateCrashReportForAuthorizationWithAuthenticationMessage:(id)arg1;

- (void).cxx_destruct;
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id*)arg2;
- (void)didPastePasteboard:(id)arg1;
- (void)getAllPasteboardsCompletionBlock:(id /* block */)arg1;
- (void)helloCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)localGeneralPasteboardCompletionBlock:(id /* block */)arg1;
- (void)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)arg1 dataOwnerBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)arg1 dataOwnerBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)memberQ_serverConnection;
- (id)memberQueue;
- (void)pasteboardWithName:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(bool)arg2 authenticationBlock:(id /* block */)arg3 dataOwnerBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (id)pasteboardWithName:(id)arg1 createIfNeeded:(bool)arg2 authenticationBlock:(id /* block */)arg3 dataOwnerBlock:(id /* block */)arg4 error:(id*)arg5;
- (id)pasteboardWithName:(id)arg1 error:(id*)arg2;
- (void)performJanitorialTasksCompletionBlock:(id /* block */)arg1;
- (id)remoteContentForLayerContextWithId:(unsigned long long)arg1 slotStyle:(id)arg2 pasteButtonTag:(id)arg3 error:(id*)arg4;
- (id)remoteContentForSlotStyle:(id)arg1 pasteButtonTag:(id)arg2 error:(id*)arg3;
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 typeIdentifier:(id)arg5 dataOwner:(long long)arg6 loadContext:(id)arg7 completionBlock:(id /* block */)arg8;
- (void)requestPatternDetectionsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 patterns:(id)arg5 needValues:(bool)arg6 dataOwner:(long long)arg7 completionBlock:(id /* block */)arg8;
- (id)requestSecurePasteAuthenticationMessageWithContext:(unsigned long long)arg1 forClientVersionedPID:(long long)arg2 error:(id*)arg3;
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id*)arg3;
- (id)serverConnection;
- (void)setMemberQ_serverConnection:(id)arg1;
- (void)setMemberQueue:(id)arg1;

@end
