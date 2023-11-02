
@interface ICCollaborationAnalyticsTracker : NSObject {
    ICCollaborationAnalyticsTrackerInternal * _collaborationAnalyticsTracker;
}

@property (nonatomic, retain) ICCollaborationAnalyticsTrackerInternal *collaborationAnalyticsTracker;

- (void).cxx_destruct;
- (id)collaborationAnalyticsTracker;
- (id)initWithDelegate:(id)arg1;
- (void)removeShareTrackingForNote:(id)arg1;
- (void)saveActivityType:(id)arg1 isCollaborationSelected:(bool)arg2 error:(id)arg3 completed:(bool)arg4 forNote:(id)arg5;
- (void)saveNewShare:(id)arg1 forNote:(id)arg2;
- (void)setCollaborationAnalyticsTracker:(id)arg1;
- (void)trackShare:(id)arg1 forNote:(id)arg2;

@end
