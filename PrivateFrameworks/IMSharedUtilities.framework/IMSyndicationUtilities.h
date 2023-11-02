
@interface IMSyndicationUtilities : NSObject {
    CKContainer * _ckContainer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *attributionFetchQueue;
@property (nonatomic, retain) CKContainer *ckContainer;

- (void).cxx_destruct;
- (id)UTITypeForURL:(id)arg1;
- (id)_URLSchemeForCollaborationApp:(unsigned long long)arg1;
- (id)_bundleIDsForCollaborationApp:(unsigned long long)arg1;
- (unsigned long long)_collaborationAppForURL:(id)arg1;
- (id)_fetchCKBundleIDsForURL:(id)arg1 returnLocalBundlesOnly:(bool)arg2;
- (id)attributionFetchQueue;
- (id)bundleIDsForCollaborationURL:(id)arg1;
- (id)bundleIDsForShareBearURL:(id)arg1;
- (id)ckContainer;
- (void)fetchAttributionsForHighlight:(id)arg1 highlight:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setCkContainer:(id)arg1;

@end
