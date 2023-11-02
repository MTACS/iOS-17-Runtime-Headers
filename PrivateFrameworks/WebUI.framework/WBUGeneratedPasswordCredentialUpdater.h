
@interface WBUGeneratedPasswordCredentialUpdater : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _urlsScheduledForUpdating;
    NSMutableDictionary * _urlsToUpdateRequests;
}

+ (id)sharedUpdater;

- (void).cxx_destruct;
- (void)_performRequest:(id)arg1;
- (id)init;
- (void)updateCredentialWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(bool)arg6;

@end
