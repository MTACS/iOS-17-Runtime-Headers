
@interface HDCloudSyncSharedSummaryManager : NSObject {
    HDProfile * _profile;
}

+ (void)unitTesting_setUrgentLatency:(double)arg1;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (id)pull:(id /* block */)arg1;
- (id)push:(id /* block */)arg1;
- (id)revokeParticipantWithOutgoingSummarySharingEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleBackgroundPush;
- (void)scheduleUrgentPush;
- (id)setupSharingWithOutgoingSummarySharingEntry:(id)arg1 sharingAuthorizations:(id)arg2 completion:(id /* block */)arg3;
- (id)synchronizeWithCompletion:(id /* block */)arg1;

@end
