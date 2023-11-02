
@interface BMComputeXPCPublisherStorage : NSObject {
    unsigned long long  _domain;
    BMFileManager * _fileManager;
    bool  _isClient;
}

@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) bool isClient;

+ (id)bookmarkStorageForCurrentProcess;

- (void).cxx_destruct;
- (id)basePath;
- (id)bookmarkPathForSessionStorageWithIdentifier:(id)arg1 client:(id)arg2;
- (bool)checkActiveSubscriptionMarkerForStream:(id)arg1;
- (bool)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)arg1 client:(id)arg2;
- (id)currentSession;
- (id)currentSessionBookmarkClientOrServerPath;
- (id)currentSessionBookmarkPath;
- (id)currentSessionNonwakingSubscriptionPath;
- (id)currentSessionPath;
- (id)currentSessionSubscriptionsPath;
- (unsigned long long)domain;
- (id)initWithUseCase:(id)arg1 domain:(unsigned long long)arg2 isClient:(bool)arg3;
- (void)initializeBiomeDSLDirectoryForBootSession;
- (bool)isClient;
- (id)newFileManagerWithUseCase:(id)arg1;
- (id)persistentPath;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)readNonWakingSubscriptions:(id*)arg1;
- (id)readNonwakingSubscriptionWithIdentifier:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (void)removeActiveSubscriptionMarkerForStream:(id)arg1;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)arg1 client:(id)arg2;
- (void)removeNonWakingSubscriptionWithIdentifier:(id)arg1 client:(id)arg2;
- (id)sessionsPath;
- (id)subscriptionMarkerPathForSessionStorageWithStream:(id)arg1;
- (void)writeActiveSubscriptionMarkerForStream:(id)arg1;
- (void)writeBookmark:(id)arg1 forSubscriptionWithIdentifier:(id)arg2 client:(id)arg3;
- (void)writeNonWakingSubscription:(id)arg1;

@end
