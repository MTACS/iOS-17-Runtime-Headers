
@interface ATXModeEntityTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(int)arg1;
- (id)modeAffinityAppCategoryScores;
- (id)modeAffinityModelsConstants;
- (id)notificationModeEntityModelWeights;
- (void)updateFactors;
- (id)widgetModeEntityModelWeights;

@end
