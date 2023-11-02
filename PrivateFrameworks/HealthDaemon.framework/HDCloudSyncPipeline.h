
@interface HDCloudSyncPipeline : NSObject {
    HDAssertion * _accessibilityAssertion;
    NSString * _analyticsCloudKitIdentifier;
    bool  _cancelRequested;
    NSObject<OS_dispatch_source> * _cloudKitOperationDelayTimer;
    HDCloudSyncCloudState * _cloudState;
    HDCloudSyncContext * _context;
    bool  _continueWhenSyncDisabled;
    id /* block */  _delayTimerCompletionBlock;
    NSUUID * _identifier;
    bool  _ignoreCloudKitOperationDelay;
    HDAssertion * _inProgressDownloadDirAssertion;
    HDCloudSyncOperationConfiguration * _operationConfiguration;
    CKOperationGroup * _operationGroup;
    id /* block */  _pipelineCompletionHandler;
    long long  _pipelineResult;
    HDPowerAssertion * _powerAssertion;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    HDCloudSyncRepository * _repository;
    NSString * _shortPipelineIdentifier;
    NSMutableArray * _stages;
    long long  _status;
}

@property (nonatomic, readonly) HDAssertion *accessibilityAssertion;
@property (nonatomic, readonly, copy) HDCloudSyncContext *context;
@property (nonatomic) bool continueWhenSyncDisabled;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic) bool ignoreCloudKitOperationDelay;
@property (nonatomic, readonly) HDCloudSyncOperationConfiguration *operationConfiguration;
@property (nonatomic, retain) CKOperationGroup *operationGroup;
@property (nonatomic, copy) id /* block */ pipelineCompletionHandler;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, readonly) long long status;

+ (id)operationGroupForContext:(id)arg1 syncCircleIdentifier:(id)arg2 assetDownloadStagingManager:(id)arg3;

- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (void)addStage:(id)arg1;
- (id)analyticsDictionary;
- (id)beginWithCompletion:(id /* block */)arg1;
- (id)beginWithTaskTree:(id)arg1;
- (void)cancel;
- (id)context;
- (bool)continueWhenSyncDisabled;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (bool)ignoreCloudKitOperationDelay;
- (id)initForContext:(id)arg1 repository:(id)arg2 accessibilityAssertion:(id)arg3 queue:(id)arg4;
- (id)operationConfiguration;
- (id)operationGroup;
- (id /* block */)pipelineCompletionHandler;
- (id)progress;
- (id)queue;
- (id)repository;
- (void)setContinueWhenSyncDisabled:(bool)arg1;
- (void)setIgnoreCloudKitOperationDelay:(bool)arg1;
- (void)setOperationGroup:(id)arg1;
- (void)setPipelineCompletionHandler:(id /* block */)arg1;
- (long long)status;

@end
