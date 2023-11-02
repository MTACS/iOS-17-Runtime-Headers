
@interface PLSyndicationDeleteManager : NSObject {
    <PLSyndicationDeleteManagerDelegate> * _delegate;
    NSString * _logPrefix;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _wellKnownPhotoLibraryIdentifier;
}

@property (nonatomic, readonly) <PLSyndicationDeleteManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *logPrefix;

- (void).cxx_destruct;
- (bool)_deleteConversationWithBundleID:(id)arg1 syndicationIdentifiers:(id)arg2;
- (bool)_deleteSyndicationAssetsWithBundleID:(id)arg1 syndicationIdentifiers:(id)arg2 deleteCount:(long long*)arg3;
- (void)_inqueueProcessDeletesForBundleID:(id)arg1 identifiers:(id)arg2;
- (bool)_processDeletesForBundleID:(id)arg1 unprefixedIdentifiers:(id)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 path:(id)arg2 logPrefix:(id)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)logPrefix;
- (void)processDeletesForBundleID:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;

@end
