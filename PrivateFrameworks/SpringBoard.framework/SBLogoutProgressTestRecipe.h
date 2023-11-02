
@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe> {
    SBLogoutProgressTransientOverlayViewController * _logoutProgressTransientOverlayViewController;
    NSArray * _remainingApplications;
    NSDictionary * _remainingBlockingTasks;
    NSMutableArray * _tasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController;
@property (nonatomic, copy) NSArray *remainingApplications;
@property (nonatomic, retain) NSDictionary *remainingBlockingTasks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultBlockingTasks;
- (id)_defaultPendingApplications;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)logoutProgressTransientOverlayViewController;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)remainingApplications;
- (id)remainingBlockingTasks;
- (void)setLogoutProgressTransientOverlayViewController:(id)arg1;
- (void)setRemainingApplications:(id)arg1;
- (void)setRemainingBlockingTasks:(id)arg1;
- (id)title;

@end
