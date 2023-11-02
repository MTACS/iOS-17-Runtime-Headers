
@interface SUCoreDocumentationDataManager : NSObject {
    NSString * _documentationPath;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) NSString *documentationPath;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)_sharedManagerInitWithPath:(id)arg1;
+ (void)setupSharedManagerWithStashPath:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)cleanupNonInstalledDocumentationWithError:(id*)arg1;
- (id)description;
- (id)documentationPath;
- (id)getDocumentationDataForInstalledUpdateType:(unsigned long long)arg1 withError:(id*)arg2;
- (id)getDocumentationForInstalledUpdateType:(unsigned long long)arg1 withError:(id*)arg2;
- (id)init;
- (id)initWithStashPath:(id)arg1;
- (id)installedBuildVersionsWithError:(id*)arg1;
- (bool)queue_cleanupNonInstalledDocumentationWithError:(id*)arg1;
- (bool)queue_evictStashIfNecessary:(id*)arg1;
- (bool)queue_getDocumentation:(id*)arg1 documentationData:(id*)arg2 forInstalledUpdateType:(unsigned long long)arg3 withError:(id*)arg4;
- (bool)queue_stashDocumentationAssetData:(id)arg1 forBuildVersion:(id)arg2 error:(id*)arg3;
- (void)setDocumentationPath:(id)arg1;
- (bool)stashDocumentationAssetData:(id)arg1 forBuildVersion:(id)arg2 error:(id*)arg3;
- (id)stashedDataDirectoryForBuildVersion:(id)arg1;
- (id)stateQueue;

@end
