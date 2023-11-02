
@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet * _allComplicationDescriptors;
    NSSet * _allWidgetDescriptors;
    ATXSuggestedPagesTunableConstants * _suggestedPagesTunableConstants;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addComplicationWithFamily:(long long)arg1 extension:(id)arg2 kind:(id)arg3 container:(id)arg4 score:(double)arg5 to:(id)arg6;
- (void)_addSystemSmallWidgetWithExtension:(id)arg1 kind:(id)arg2 container:(id)arg3 score:(double)arg4 to:(id)arg5;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForExerciseMode;
- (id)_complicationsForGamingMode;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForPersonalMode;
- (id)_complicationsForReadingMode;
- (id)_complicationsForSleepMode;
- (id)_complicationsForWorkMode;
- (bool)_hasSignificantHomeAccessoryEvents;
- (bool)_hasSignificantRemindersEvents;
- (bool)_hasSignificantStocksEvents;
- (bool)_hasTVInterest;
- (id)_landscapeComplicationsForDrivingMode;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_landscapeComplicationsForGamingMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_landscapeComplicationsForPersonalMode;
- (id)_landscapeComplicationsForReadingMode;
- (id)_landscapeComplicationsForSleepMode;
- (id)_landscapeComplicationsForWorkMode;
- (id)init;
- (id)provideComplicationsForSuggestedFaceType:(long long)arg1 environment:(id)arg2;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)arg1 environment:(id)arg2;

@end
