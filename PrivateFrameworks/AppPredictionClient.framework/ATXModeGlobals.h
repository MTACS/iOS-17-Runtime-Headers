
@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (int)homeLOISearchRadius;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (bool)isAutomationTriggerSuggestionsForFocusEnabled;
- (bool)isSetupSuggestionsForFocusEnabled;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)workLOISearchRadius;

@end
