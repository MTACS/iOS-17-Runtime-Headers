
@interface ATXHeuristicActionProducer : NSObject {
    id  _expireNotificationHandle;
}

+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)arg1;
+ (double)generateScoreForHeuristic:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_criteriaForJobOnDate:(id)arg1;
- (id)actionPredictionBlacklist;
- (id)bundleIdForAction:(id)arg1;
- (void)coalescedProduceActions;
- (void)dealloc;
- (id)digitalHealthBlacklist;
- (id)firstUpdateDateForActions:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateOnGlobalQueueWithDelay:(double)arg1;
- (bool)isActionBlacklisted:(id)arg1;
- (id)produceActions;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)arg1;
- (void)setUpdateJobForCriteria:(id)arg1;
- (bool)userAlreadyEngagedWithAction:(id)arg1;

@end
