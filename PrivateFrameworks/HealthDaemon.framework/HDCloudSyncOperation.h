
@interface HDCloudSyncOperation : NSObject <NSProgressReporting> {
    HDCloudSyncCloudState * _cloudState;
    HDCloudSyncOperationConfiguration * _configuration;
    double  _endTime;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _loggingPrefix;
    id /* block */  _onError;
    id /* block */  _onSuccess;
    HDProfile * _profile;
    NSProgress * _progress;
    double  _startTime;
    long long  _status;
}

@property (retain) HDCloudSyncCloudState *cloudState;
@property (nonatomic, readonly) HDCloudSyncOperationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (copy) id /* block */ onError;
@property (copy) id /* block */ onSuccess;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (long long)progressCount;
+ (bool)shouldFailOnXPCActivityDeferral;
+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;
+ (void)unitTest_clearAllOperationHandlers;
+ (id /* block */)unitTest_operationHandler;
+ (void)unitTest_setOperationHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)analyticsDictionary;
- (id)asPipelineStage;
- (void)chainFromOperation:(id)arg1 transitionHandler:(id /* block */)arg2;
- (id)cloudState;
- (id)configuration;
- (void)delegateToOperation:(id)arg1;
- (id)description;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)identifier;
- (id)init;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithPreceedingOperation:(id)arg1 transitionHandler:(id /* block */)arg2;
- (void)main;
- (id /* block */)onError;
- (id /* block */)onSuccess;
- (id)operationIgnoringErrors;
- (id)operationWithRunCondition:(id /* block */)arg1;
- (id)profile;
- (id)progress;
- (void)setCloudState:(id)arg1;
- (void)setOnError:(id /* block */)arg1;
- (void)setOnSuccess:(id /* block */)arg1;
- (void)skip;
- (void)start;
- (long long)status;
- (void)updateCompletedProgressCount:(long long)arg1;

@end
