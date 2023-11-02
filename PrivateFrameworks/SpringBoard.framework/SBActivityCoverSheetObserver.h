
@interface SBActivityCoverSheetObserver : NSObject <SBActivityObserver> {
    CSActivityManager * _activityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityDidDismiss:(id)arg1;
- (void)activityDidExceedReducedPushBudget:(id)arg1;
- (void)activityDidStart:(id)arg1;
- (void)activityDidUpdate:(id)arg1;
- (void)activityWasBlocked:(id)arg1;
- (void)activityWasUnblocked:(id)arg1;
- (id)init;
- (bool)shouldHandleActivityItem:(id)arg1;

@end
