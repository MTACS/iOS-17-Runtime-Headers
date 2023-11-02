
@interface ELSManager : NSObject {
    NSUserDefaults * _defaults;
    ELSSnapshot * _snapshot;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) ELSSnapshot *snapshot;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)beginUpdates;
- (void)commitBatchTransaction:(id)arg1;
- (bool)commitConsentDataTransaction:(id)arg1;
- (bool)commitConsentHandlesTransaction:(id)arg1;
- (bool)commitConsentTransaction:(id)arg1;
- (bool)commitDatesTransaction:(id)arg1;
- (bool)commitFollowUpOptions:(id)arg1;
- (bool)commitIdentifiersToRetryTransaction:(id)arg1;
- (bool)commitMetadataTransaction:(id)arg1;
- (bool)commitQueueTransaction:(id)arg1;
- (bool)commitRetriesRemainingTransaction:(id)arg1;
- (bool)commitSessionDeviceTransaction:(id)arg1;
- (bool)commitStatusTransaction:(id)arg1;
- (bool)commitUploadCompletedPercentage:(id)arg1;
- (void)dealloc;
- (id)defaults;
- (void)finish;
- (void)finishWithCompletion:(id /* block */)arg1;
- (void)finishWithFailure;
- (void)finishWithFailureBlock:(id /* block */)arg1;
- (void)flush;
- (void)flushWithCompletion:(id /* block */)arg1;
- (void)getBugSessionActivityWithCompletion:(id /* block */)arg1;
- (id)initSingleton;
- (bool)object:(id)arg1 isEqualToObject:(id)arg2;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (void)setDefaults:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (void)transactionWithBlock:(id /* block */)arg1;
- (void)transactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
