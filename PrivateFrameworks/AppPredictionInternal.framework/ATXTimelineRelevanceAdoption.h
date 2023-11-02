
@interface ATXTimelineRelevanceAdoption : NSObject {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
    ATXAdoptionTypeToBudgetMapper * _budgetMapper;
    NSDictionary * _distinctScoreCounts;
    NSDictionary * _globalAdoptionPlist;
    ATXInformationStore * _informationStore;
}

- (void).cxx_destruct;
- (bool)_hasDiverseSchemaGlobally:(id)arg1 kind:(id)arg2;
- (void)_updateQuotasDictionary:(id)arg1 forWidgetBundleId:(id)arg2 widgetKind:(id)arg3 parameterName:(id)arg4 withValue:(long long)arg5;
- (void)_updateQuotasForWidgetBundleId:(id)arg1 widgetKind:(id)arg2 quotasDictionary:(id)arg3;
- (unsigned long long)adoptionTypeForWidgetBundleId:(id)arg1 kind:(id)arg2;
- (id)globalDiverseSchemaRawNumber:(id)arg1 kind:(id)arg2;
- (id)init;
- (id)initWithGlobalAdoptionPlist:(id)arg1 informationStore:(id)arg2 abuseControlConfig:(id)arg3;
- (void)persistQuotasWithActivity:(id)arg1;
- (void)trainWidgetPredictionModelWithActivity:(id)arg1;

@end
