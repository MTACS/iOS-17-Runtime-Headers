
@interface CKUploadRequestManager : NSObject {
    CKUploadRequestManagerInternals * _internals;
}

@property (nonatomic, readonly) NSString *activityIdentifierForSchedulingRepairs;
@property (nonatomic) double assetRepairSchedulerDefaultSuspensionTime;
@property (nonatomic) long long assetRepairSchedulerRepairBatchCountLimit;
@property (nonatomic) long long assetRepairSchedulerRepairRetryCount;
@property (copy) id /* block */ assetRequestCallback;
@property (nonatomic) double cancelledErrorRetryTime;
@property (nonatomic, readonly) CKUploadRequestPersistentStore *database;
@property (nonatomic, readonly) CKUploadRequestManagerInternals *internals;
@property (copy) NSString *machServiceName;
@property (nonatomic) double notificationDebouncePeriod;
@property (copy) id /* block */ packageRequestCallback;
@property (nonatomic) double recurringFetchPeriod;
@property (nonatomic, readonly) CKContainer *repairContainer;
@property (nonatomic, readonly) CKSyncEngine *repairZoneSyncEngine;
@property (nonatomic, readonly) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (nonatomic) double retryableErrorMaxRetryCount;
@property (nonatomic) double retryableErrorRetryTime;
@property (nonatomic) double tryAgainLaterRetryTime;

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;
+ (bool)ignoreUploadRequestPushNotifications;
+ (void)setIgnoreUploadRequestPushNotifications:(bool)arg1;

- (void).cxx_destruct;
- (id)activityIdentifierForSchedulingRepairs;
- (double)assetRepairSchedulerDefaultSuspensionTime;
- (long long)assetRepairSchedulerRepairBatchCountLimit;
- (long long)assetRepairSchedulerRepairRetryCount;
- (id /* block */)assetRequestCallback;
- (void)cancelAllOperations;
- (double)cancelledErrorRetryTime;
- (id)database;
- (void)dealloc;
- (void)fetchServerChanges:(id /* block */)arg1;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(bool)arg3;
- (id)internals;
- (id)machServiceName;
- (void)manuallyTriggerUploadRequests;
- (double)notificationDebouncePeriod;
- (id /* block */)packageRequestCallback;
- (double)recurringFetchPeriod;
- (void)registerForItemRequests;
- (id)repairContainer;
- (id)repairZoneSyncEngine;
- (id)responseActionThrottler;
- (double)retryableErrorMaxRetryCount;
- (double)retryableErrorRetryTime;
- (void)scheduleOrInvokeRepairsNow;
- (void)setAssetRepairSchedulerDefaultSuspensionTime:(double)arg1;
- (void)setAssetRepairSchedulerRepairBatchCountLimit:(long long)arg1;
- (void)setAssetRepairSchedulerRepairRetryCount:(long long)arg1;
- (void)setAssetRequestCallback:(id /* block */)arg1;
- (void)setCallback:(id /* block */)arg1 forOverridePoint:(long long)arg2;
- (void)setCancelledErrorRetryTime:(double)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setNotificationDebouncePeriod:(double)arg1;
- (void)setPackageRequestCallback:(id /* block */)arg1;
- (void)setRecurringFetchPeriod:(double)arg1;
- (void)setRetryableErrorMaxRetryCount:(double)arg1;
- (void)setRetryableErrorRetryTime:(double)arg1;
- (void)setTryAgainLaterRetryTime:(double)arg1;
- (double)tryAgainLaterRetryTime;
- (void)unregister;

@end
