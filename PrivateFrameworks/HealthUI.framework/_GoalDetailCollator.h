
@interface _GoalDetailCollator : NSObject {
    long long  _entriesExceedingGoal;
    long long  _entryCount;
    double  _totalPercentFromGoal;
}

- (id)activitySummaryDetailStringWithActivitySummary:(id)arg1 unitPreferenceController:(id)arg2 activityValue:(long long)arg3 displayTypeController:(id)arg4;
- (id)detailStringWithTimeScope:(long long)arg1;
- (id)init;
- (void)processCoordinateUserInfo:(id)arg1;

@end
