
@interface HRWDUserActivityManager : NSObject {
    _HRWDActivityNode * _currentNode;
    NSMutableDictionary * _indexedActivities;
    NSMutableArray * _policies;
    bool  _recordActivities;
    UIViewController * _rootViewController;
    _HRWDActivityNode * _topNode;
}

@property (nonatomic, readonly) NSMutableArray *policies;
@property (nonatomic) bool recordActivities;

- (void).cxx_destruct;
- (id)_castleRockSpotlightBreadcrumbs:(id)arg1;
- (id)_handoffActivityBreadcrumbsForOnboarding:(id)arg1;
- (id)_handoffActivityBreadcrumbsForSampleType:(id)arg1;
- (void)_resetActivities;
- (bool)_restoreActivityFromPolicies:(id)arg1;
- (void)_restoreFromActivityChain:(id)arg1;
- (void)_setCurrentNodeToResponder:(id)arg1;
- (void)_userActivityWithTitle:(id)arg1 keywords:(id)arg2 activityType:(id)arg3;
- (id)_userActivityWithType:(id)arg1;
- (void)addPolicy:(id)arg1;
- (void)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 title:(id)arg3 keywords:(id)arg4;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (id)policies;
- (bool)recordActivities;
- (void)restoreFromUserActivity:(id)arg1;
- (void)setRecordActivities:(bool)arg1;
- (void)setRootViewController:(id)arg1;
- (void)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;

@end
