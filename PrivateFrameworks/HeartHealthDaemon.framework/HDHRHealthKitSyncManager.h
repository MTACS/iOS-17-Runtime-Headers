
@interface HDHRHealthKitSyncManager : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (void)triggerImmediateSyncWithReason:(id)arg1 loggingCategory:(id)arg2;

@end
