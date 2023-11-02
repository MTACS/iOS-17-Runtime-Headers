
@interface TIPreferencesAnalyzer : NSObject <TIPreferencesAnalyzing> {
    TIPreferencesAnalyzerRegistry * _registry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TIPreferencesAnalyzerRegistry *registry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createEventSpecForTextInputUserPreferenceChanges;
- (id)_createEventSpecForTextInputUserPreferenceState;
- (void)_dispatchEventPayloadWithPreferenceNameToChangesEvent:(id)arg1 activeInputModes:(id)arg2 currentValue:(id)arg3 previousValue:(id)arg4 changedAt:(id)arg5 analyzedAt:(id)arg6 buildAtChange:(id)arg7 isFreshInstall:(bool)arg8 approxDateOfBuildInstall:(id)arg9 buildAtLastAnalysis:(id)arg10;
- (void)_dispatchEventPayloadWithPreferenceNameToStateEvent:(id)arg1 activeInputModes:(id)arg2 currentValue:(id)arg3;
- (void)_recordAnalysisOfPreferenceKey:(id)arg1 inDomain:(id)arg2;
- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (void)_resetChangedAtForPreferenceKey:(id)arg1 inDomain:(id)arg2;
- (void)_updateApproxBuildAtLastAnalysisWithBuild:(id)arg1 andApproxDateOfInstall:(id)arg2 ForPreferenceKey:(id)arg3 inDomain:(id)arg4;
- (void)analyzeRegisteredPreferences;
- (id)init;
- (id)initWithRegistry:(id)arg1;
- (id)registry;
- (void)setRegistry:(id)arg1;

@end
