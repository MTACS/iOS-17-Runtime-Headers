
@interface PGGraphIngestHolidayProcessorHelper : NSObject {
    NSMutableDictionary * _biologicalSexByPartnerPersonNodeIdentifier;
    PGGraphPersonNodeCollection * _childPersonNodes;
    PGGraphPersonNodeCollection * _coworkerPersonNodes;
    PGGraphPersonNodeCollection * _familyPersonNodes;
    PGGraphPersonNodeCollection * _fatherPersonNodes;
    PGGraphPersonNodeCollection * _friendPersonNodes;
    PGHolidayClassifier * _holidayClassifier;
    unsigned long long  _meBiologicalSex;
    PGGraphMeNodeCollection * _meNodeAsCollection;
    PGGraphPersonNodeCollection * _motherPersonNodes;
    PGGraphPersonNodeCollection * _nonAcquaintancePersonNodes;
    PGGraphPersonNodeCollection * _partnerPersonNodes;
}

+ (id)keyboardLanguageCodesForInfoNode:(id)arg1 holidayService:(id)arg2;

- (void).cxx_destruct;
- (double)_calculateSceneScores:(id)arg1;
- (double)_dateScoreForEventRule:(id)arg1 localeCode:(id)arg2 holidayDate:(id)arg3 momentDate:(id)arg4;
- (unsigned long long)_eventRuleLocationTraitForMomentNode:(id)arg1 graph:(id)arg2;
- (unsigned long long)_eventRulePeopleTraitForPersonNodes:(id)arg1 graph:(id)arg2;
- (double)dateScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentDate:(id)arg5;
- (id)holidayCalendarEventRuleTraitsForMomentNode:(id)arg1;
- (id)init;
- (bool)isCelebratingForEventRule:(id)arg1 momentNode:(id)arg2 momentLocalDate:(id)arg3 withGraph:(id)arg4 loggingConnection:(id)arg5 localeCountryCode:(id)arg6 keyboardLanguageCodes:(id)arg7;
- (double)locationScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4;
- (bool)momentTraitsMatchesHolidayTraits:(id)arg1 momentNode:(id)arg2 loggingConnection:(id)arg3;
- (id)momentsCelebratingRule:(id)arg1 localDates:(id)arg2 userCountryCode:(id)arg3 keyboardLanguageCodes:(id)arg4 graph:(id)arg5 loggingConnection:(id)arg6;
- (void)prepareIfNeededWithGraph:(id)arg1;
- (double)sceneScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentNode:(id)arg5;

@end
