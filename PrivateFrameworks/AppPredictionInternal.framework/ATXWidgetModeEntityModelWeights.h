
@interface ATXWidgetModeEntityModelWeights : NSObject {
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
    NSDictionary * _widgetModeEntityModelWeights;
}

- (void).cxx_destruct;
- (id)abGroup;
- (double)classConditionalProbability;
- (double)globalPopularity;
- (id)init;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)weightForWidgetProbability;

@end
