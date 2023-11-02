
@interface CPSWebClipStore : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_readWebClipDictionaryRepresentationFromDiskWithWebClipIdentifier:(id)arg1;
+ (id)_urlForWebClipWithIdentifier:(id)arg1;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_appClips;
- (id)_bookmarkWebClips;
- (id)_copyOrReplaceExistingFileAtPath:(id)arg1 withNewFileAtPath:(id)arg2;
- (id)_createOrUpdateExistingWebClipWithClipMetadata:(id)arg1 createdNewWebClip:(bool*)arg2 error:(id*)arg3;
- (id)_enumerateAndFilterClipsWithBlock:(id /* block */)arg1;
- (id)_fetchInstalledAppClips;
- (id)_init;
- (bool)_redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 errors:(id*)arg3;
- (void)_reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1;
- (id)_removeFileFromPath:(id)arg1;
- (bool)_removeWebClipWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_removeWebClipsWithApplicationBundleIdentifier:(id)arg1 errors:(id*)arg2;
- (bool)_saveWebClip:(id)arg1 error:(id*)arg2;
- (id)_webClipsBackedbyAppClipIdentifier:(id)arg1;
- (void)createOrUpdateExistingWebClipWithMetadata:(id)arg1 comletionHandler:(id /* block */)arg2;
- (void)fetchAppClipsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchBookmarkWebClipsWithCompletionHandler:(id /* block */)arg1;
- (void)getAppClipWithIdentifier:(id)arg1 receiveOnQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getAppClipWithURLHash:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getWebClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getWebClipsBackedbyAppClipIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeDuplicateWebClipsWithCompletionHandler:(id /* block */)arg1;
- (void)redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1;
- (void)removeAppClipIconForWebClipWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeExpiredPoweredByWebClipsWithCompletionHandler:(id /* block */)arg1;
- (void)removePoweredByWebClipsLastActivatedBefore:(id)arg1 completion:(id /* block */)arg2;
- (void)removeWebClipWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeWebClipsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeWebClipsWithApplicationBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveWebClip:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)synchronouslyGetAppClipWithIdentifier:(id)arg1;
- (void)updateAppClipIcon:(id)arg1 forWebClipWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWebClipTitle:(id)arg1 forAppClipBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
