
@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate> {
    NSArray * _eventRules;
    NSLocale * _locale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eventRules;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateEventRulesWithNames:(id)arg1 betweenLocalDate:(id)arg2 andLocalDate:(id)arg3 supportedCountryCode:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)_ruleWithUUID:(id)arg1 countryCode:(id*)arg2;
- (id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2;
- (void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 supportedCountryCode:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEventRulesForAllCountriesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEventRulesForAllCountriesWithNames:(id)arg1 betweenLocalDate:(id)arg2 andLocalDate:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEventRulesWithNames:(id)arg1 betweenLocalDate:(id)arg2 andLocalDate:(id)arg3 supportedCountryCode:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)enumerateEventRulesWithNames:(id)arg1 betweenLocalDate:(id)arg2 andLocalDate:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)eventRuleForHolidayName:(id)arg1;
- (id)eventRuleForHolidayName:(id)arg1 localDate:(id)arg2;
- (id)eventRules;
- (id)eventRulesForLocalDate:(id)arg1;
- (id)initWithEventRules:(id)arg1 locale:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2;
- (id)locale;
- (unsigned long long)peopleTraitForHolidayName:(id)arg1;
- (id)sceneNamesForHolidayName:(id)arg1;
- (id)supportedLanguageCodes;
- (id)triggerHolidaysForCountryCode:(id)arg1;

@end
