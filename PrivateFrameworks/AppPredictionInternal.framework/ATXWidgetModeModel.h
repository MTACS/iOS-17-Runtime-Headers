
@interface ATXWidgetModeModel : NSObject {
    unsigned long long  _mode;
    ATXWidgetModeEntityModelWeights * _widgetModeEntityModelWeights;
    ATXGlobalWidgetPopularityModel * _widgetPopularityModel;
}

+ (id)fetchAvailableWidgets;

- (void).cxx_destruct;
- (void)addEntitySpecificFeaturesToWidgetFeatures:(id)arg1 scoredApp:(id)arg2;
- (double)combineWidgetModeProbability:(double)arg1 withAppModeProbabiilty:(double)arg2;
- (id)initWithMode:(unsigned long long)arg1 globalWidgetPopularityModel:(id)arg2;
- (double)scoreFromCorrelationStatistics:(id)arg1;
- (id)scoredEntitiesWithScoredAppEntities:(id)arg1;
- (id)scoredWidgetModeEntityWithWidgetFeatures:(id)arg1 widget:(id)arg2 scoredApp:(id)arg3;
- (id)widgetModeEntityForDescriptor:(id)arg1 widgetSize:(long long)arg2 scoredAppEntities:(id)arg3;
- (id)widgetModeEntityForWidgetId:(id)arg1 widgetFeatures:(id)arg2 availableWidgets:(id)arg3 scoredAppEntities:(id)arg4;

@end
