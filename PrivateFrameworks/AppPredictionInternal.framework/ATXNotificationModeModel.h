
@interface ATXNotificationModeModel : NSObject {
    unsigned long long  _mode;
    ATXNotificationModeEntityModelWeights * _notificationModeEntityModelWeights;
}

- (void).cxx_destruct;
- (void)addSubFeaturesToFeatureDict:(id)arg1 subFeatures:(id)arg2 prefix:(id)arg3;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (id)modeEntityScoreFromEngagementFeatures:(id)arg1 dismissalFeatures:(id)arg2 hiddenFeatures:(id)arg3 clearedFeatures:(id)arg4 expiredFeatures:(id)arg5 scoredApp:(id)arg6 scoredContact:(id)arg7;
- (double)scoreFromEngagementFeatures:(id)arg1 dismissalFeatures:(id)arg2 hiddenFeatures:(id)arg3 clearedFeatures:(id)arg4 expiredFeatures:(id)arg5 scoredApp:(id)arg6 scoredContact:(id)arg7;
- (id)scoredEntitiesWithScoredAppEntities:(id)arg1 scoredContactEntities:(id)arg2;

@end
