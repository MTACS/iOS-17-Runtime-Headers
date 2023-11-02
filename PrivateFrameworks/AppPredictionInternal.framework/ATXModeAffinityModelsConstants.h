
@interface ATXModeAffinityModelsConstants : NSObject {
    NSDictionary * _modeAffinityModelsConstants;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
}

- (void).cxx_destruct;
- (id)init;
- (int)numOfDaysToComputeEntityOccurenceFeatures;
- (int)numOfDaysToComputeEntityOccurenceFeaturesForContacts;
- (double)scalingFactorForModeGlobalPriors;

@end
